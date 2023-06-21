#include<iostream>
using namespace std;

int main() {
	int paper[101][101] = { 0 };
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int h, v;
		cin >> h >> v;
		for (int t = h; t < h + 10; t++) {
			for (int p = v; p < v + 10; p++) {
				paper[t][p] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j]){
				sum++;
			}
		}
	}
	cout << sum;
}