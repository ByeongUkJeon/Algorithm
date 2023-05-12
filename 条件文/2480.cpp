#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int a, b, c, MAX;
	vector<int> v(3, 0);
	cin >> a >> b >> c;
	v[0] = a, v[1] = b, v[2] = c;
	sort(v.begin(), v.end());
	if (a == b && a == c) {
		cout << 10000 + (a * 1000);
	}
	else if (a == b) {
		cout << 1000 + (a * 100);
	}
	else if (a == c) {
		cout << 1000 + (a * 100);
	}
	else if (b == c) {
		cout << 1000 + (b * 100);

	}
	else {
		cout << v[2] * 100;
	}
	
}