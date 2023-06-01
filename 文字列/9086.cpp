using namespace std;
#include<iostream>
#include<string>

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;
		cout << s[0] << s[s.length() - 1] << "\n";
	}
}