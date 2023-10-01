#include<iostream>
#include<cstring>
#include<string>
using namespace std;
long long cnt = 0;
int N;
long long mem[10][101] = { 0, };
long long stair(int a, int c) {

	if (a == -1 || a == 10) {
		return 0;
	}
	if (c == N) {
		return 1;
	}
	if (mem[a][c] != 0) {
		return mem[a][c];
	}
	return mem[a][c] = (stair(a + 1, c + 1) + stair(a - 1, c + 1)) % 1000000000;

	
}
int main() {
	long long res = 0;
	cin >> N;

	for (int i = 1; i < 10; i++) {
		res += stair(i, 1);
	}
	cout << res % 1000000000;
}