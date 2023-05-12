#include<iostream>

using namespace std;
int main() {
	int h, m, t;
	cin >> h >> m;
	cin >> t;

	m = m + t;
	if (m >= 60) {
		h += m / 60;
		m %= 60;
	}

	if (h >= 24) {
		h -= 24;
	}
	cout << h << " " << m;

}