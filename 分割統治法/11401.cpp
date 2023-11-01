#include<iostream>
using namespace std;
long long P = 1000000007;
long long mem[4000001] = { 0 };
long long mul(long a, long b) {
	if (b == 0) {
		return 1;
	}
	if (b == 1) {
		return a % P;
	}	
	else {
		long long temp = mul(a, b / 2);
		if (b % 2 == 0) {
			return (temp * temp) % P;
		}
		else {
			return a * (temp * temp) % P;

		}
	}
}

int main() {
	int N, K;
	cin >> N >> K;
	mem[0] = 1;
	mem[1] = 1;
	for (int i = 2; i <= N; i++) {
		mem[i] = (mem[i - 1] * i) % P;
	}
	int t = (mem[K] * mem[N - K]) % P;
	cout << (mul(t, P - 2) * mem[N]) % P;
}