#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v(5, 0);
	int t, sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> t;
		v[i]= t;
		sum += t;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (v[i] > v[j]) {
				t = v[i];
				v[i] = v[j];
				v[j] = t;
			}
		}
	}
	cout << sum / 5<< endl;
	cout << v[2];
}