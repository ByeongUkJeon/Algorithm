#include<iostream>
#include<vector>
using namespace std;
int tmp[1001] = { 0 };
void merge(vector<int> &v, int left, int right) {
	int L, R, k, a;
	int mid = (left + right) / 2;
	L = left;
	R = mid + 1;
	k = left;

	while (L <= mid && R <= right) {
		tmp[k++] = v[L] <= v[R] ? v[L++] : v[R++];
	}
	if (L > mid) {
		for (a = R; a <= right; a++) {
			tmp[k++] = v[a];
		}
	}
	else {
		for (a = L; a <= mid; a++) {
			tmp[k++] = v[a];
		}
	}
	for (a = left; a <= right; a++) {
		v[a] = tmp[a];
	}
}

void merge_sort(vector<int> &v, int left, int right) {
	if (left == right) return;
	int mid;
	mid = (left + right) / 2;
	merge_sort(v, left, mid);
	merge_sort(v, mid + 1, right);
	merge(v, left, right);
}

int main() {
	vector<int> v;
	int N, t, sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> t;
		v.push_back(t);
	}
	merge_sort(v, 0, N - 1);
	for (int i = 1; i < N; i++) {
		v[i] += v[i - 1];
	}
	for (int i = 0; i < N; i++) {
		sum += v[i];
	}
	cout << sum;
}