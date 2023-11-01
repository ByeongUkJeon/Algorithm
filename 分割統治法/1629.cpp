#include<iostream>
using namespace std;
long long mul(long long a, long long b, long long c) {
	if (b == 0) {
		return 1;
	}
	if (b == 1) {
		return a % c;
	}
	else {
		if (b % 2 == 0) {
			return mul(a, b / 2, c) % c * mul(a, b / 2, c) % c;
		}
		else {
			return a % c * mul(a, (b - 1) / 2, c) % c * mul(a, (b - 1) / 2, c) % c;

		}
	}
}

int main() {
	long long A, B, C;
	cin >> A >> B >> C;
	cout << mul(A, B, C) << endl;
}