using namespace std;
#include<iostream>
#include<cmath>
#include<vector>
int main() {
	int start = 1, n;
	cin >> n;
	vector<long long int> N;
	for (int i = 0; i < 16; i++) {
		N.push_back(pow(start + 1, 2));

		start *= 2;

	}
	cout << N[n] << "\n";
}