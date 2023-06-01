using namespace std;

#include<iostream>
#include<string>

int main() {
	for (int i = 0; i < 100; i++) {
		string s;
		getline(cin, s);
		if (cin.eof()) break;
		cout << s << "\n";
		
	}
}