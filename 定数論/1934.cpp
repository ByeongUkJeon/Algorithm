#include<iostream>
#include<algorithm>
using namespace std;
int GCD(int a, int b) {
	if (a % b == 0) return b;
	return GCD(b, a % b);
}
int main() {
	int a, b, tempa, tempb, lcd, T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> tempa >> tempb;
		a = max(tempa, tempb);
		b = min(tempa, tempb);
		cout << a * b / GCD(a, b) << endl;
	}

}