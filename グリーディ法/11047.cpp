#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector <int> v;
	int N, K, A, stand, num, sum = 0;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> A;
		v.push_back(A);
	}
	for (int i = 0; i < N; i++) {
		if (v[i] <= K) {
			stand = i;
		}
	}
	while (stand >= 0) {
		if (v[stand] <= K) {
			num = K / v[stand];
			K -= num * v[stand];
			sum += num;
		}
		else {
			stand = stand - 1;
		}
	}
	cout << sum;
}