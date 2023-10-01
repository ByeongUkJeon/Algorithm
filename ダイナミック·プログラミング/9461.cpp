
#include<iostream>
using namespace std;
int main() {
	long long P[100] = { 0, };
	P[0] = P[1] = P[2] = 1;
	int T, N;
	std::cin >> T;
	
	for (int i = 3; i < 100; i++) {
		P[i] = P[i - 2] + P[i - 3];
	}
	for (int i = 0; i < T; i++) {
		std::cin >> N;
		std::cout << P[N-1] << endl;;
	}
}