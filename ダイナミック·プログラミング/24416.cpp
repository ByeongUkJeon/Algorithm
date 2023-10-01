#include<iostream>
using namespace std;
int fc = 1;
int dfc = 1;
int f[41] = { 0 };
int fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		fc++;
		return (fib(n - 1) + fib(n - 2));
	}
}
int dfib(int n) {
	f[1] = 1, f[2] = 1;
	for (int i = 3; i < n; i++) {
		dfc++;
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
}

int main() {
	int n;
	cin >> n;
	fib(n);
	dfib(n);
	cout << fc << " " << dfc;
}