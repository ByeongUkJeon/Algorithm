#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

int main() {
	vector<char> stack;
	string s;
	int N, isit = 0;
	while(true) {

		getline(cin, s);
		for (int j = 0; j < s.size(); j++) {
			if (s.at(j) == '(') {
				stack.push_back('(');
			}
			else if (s.at(j) == '[') {
				stack.push_back('[');
			}
			else if (s.at(j) == ')') {
				if (!stack.size()) {
					cout << "no" << endl;
					isit = 1;
					stack.clear();
					break;
				}
				else {
					if (stack[stack.size() - 1] == '(')
						stack.pop_back();
					else {
						cout << "no" << endl;
						isit = 1;
						stack.clear();
						break;
					}
				}
			}
			else if (s.at(j) == ']') {
				if (!stack.size()) {
					cout << "no" << endl;
					isit = 1;
					stack.clear();
					break;
				}
				else {
					if (stack[stack.size() - 1] == '[')
						stack.pop_back();
					else {
						cout << "no" << endl;
						isit = 1;
						stack.clear();
						break;
					}
				}
			}
			else if (s.at(j) == '.'){
				if (s.size() == 1) return 0;
				j = s.size();
				break;
			}
			else {
				continue;
			}
		}
		if (isit == 0) {
			if (stack.size())
				cout << "no" << endl;
			else
				cout << "yes" << endl;
		}
		isit = 0;
		stack.clear();
	}
}