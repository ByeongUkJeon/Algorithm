#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

int main() {
	vector<char> stack;
	string s;
	int N, isit = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s.at(j) == '(') {
				stack.push_back('(');
			}
			if (s.at(j) == ')') {
				if (!stack.size()) {
					cout << "NO" << endl;
					isit = 1;
					stack.clear();
					break;
				}
				else {
					stack.pop_back();
				}
			}
		}
		if (isit == 0) {
			if (stack.size())
				cout << "NO" << endl;
			else
				cout << "YES" << endl;
		}
		isit = 0;
		stack.clear();
	}
}