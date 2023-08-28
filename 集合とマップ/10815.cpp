#include<iostream>
#include<vector>
using namespace std;
vector<int> temp(500000, 0);
vector<int> v;

void merge(vector<int> &v, int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;
	while (i <= mid && j <= right) {
		if (v[i] <= v[j]) {
			temp[k++] = v[i++];
		}
		else {
			temp[k++] = v[j++];
		}
	}
	if (i > mid) {
		for (l = j; l <= right; l++) {
			temp[k++] = v[l];
		}
	}
	else {
		for (l = i; l <= mid; l++) {
			temp[k++] = v[l];
		}
	}
	for (l = left; l <= right; l++) {
		v[l] = temp[l];
	}
}
void divide(vector <int> &v, int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		
		divide(v, left, mid);
		divide(v, mid + 1, right);
		merge(v, left, mid, right);
	}
}
int binary(int key, int left, int right) {
	if (left < right) {
		while (left <= right) {
			int mid = (left + right) / 2;
			if (v[mid] == key) {
				return 1;
			}
			else if (v[mid] > key) {
				right = mid - 1;
			}
			else if (v[mid] < key) {
				left = mid + 1;
			}
		}
	}
	return 0;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M, t;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> t;
		v.push_back(t);
	}
	divide(v, 0, N - 1);
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> t;
		cout << binary(t, 0, N - 1) << " ";
	}
}