#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
vector<int> temp(500000, 0);
void merge(vector<int> &v, int left, int mid, int right) {
	int i, j, k, l;
	i = left; j = mid + 1; k = left;

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
void divcon(vector<int> &v, int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		divcon(v, left, mid);
		divcon(v, mid + 1, right);
		merge(v, left, mid, right);
	}
}
int lower_bound(int key, int low, int high) {
	while (low < high) {
		int mid = (low + high) / 2;
		if (v[mid] >= key) {
			high = mid;
		}
		else {
			low = mid + 1;
		}
	}
	return high;
}
int upper_bound(int key, int low, int high) {
	while (low < high) {
		int mid = (low + high) / 2;
		if (v[mid] > key) {
			high = mid;
		}
		else {
			low = mid + 1;
		}
	}
	return high;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M, t;
	vector<int> v2;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> t;
		v.push_back(t);
	}
	divcon(v, 0, N - 1);

	cin >> M;
	vector<int> res(M, 0);
	for (int i = 0; i < M; i++) {
		cin >> t;
		cout << upper_bound(t, 0, N) - lower_bound(t, 0, N) << '\n';
	}

}