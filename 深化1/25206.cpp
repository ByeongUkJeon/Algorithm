using namespace std;
#include<string>
#include <map>
#include<iostream>

int main() {
	cout.setf(ios::fixed);
	map<string, double> gradeMap = {
		{"A+", 4.5},
		{"A0", 4.0},
		{"B+", 3.5},
		{"B0", 3.0},
		{"C+", 2.5},
		{"C0", 2.0},
		{"D+", 1.5},
		{"D0", 1.0},
		{"F", 0.0},
	};
	double result = 0.0;
	double scores = 0.0;
	for (int i = 0; i < 20; i++) {
		string subject;
		double score;
		string grade;

		cin >> subject >> score >> grade;
		if (!grade.compare("P")) {
			continue;
		}
		result += gradeMap[grade] * score;
		scores += score;
	}
	cout << result / scores << "\n";
}