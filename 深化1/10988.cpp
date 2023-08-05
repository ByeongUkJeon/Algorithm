using namespace std;
#include<iostream>
#include<string>

int main() {
	string s;
	string s2 = "";
	cin >> s;
	for (int i = s.length() - 1; i >= 0; i--) {
		s2 += s[i];
	}
	if (s.compare(s2)) {
		cout << "0\n";
	}
	else {
		cout << "1\n";
	}
}