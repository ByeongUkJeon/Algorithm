#include<iostream>
using namespace std;

int main() {
	int y = 1, x = 1, MAX = 0;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			int t;
			cin >> t;
			if (t > MAX) {
				MAX = t;
				y = i;
				x = j;
			}
		}
	}
	cout << MAX << endl << y << " " << x;
}