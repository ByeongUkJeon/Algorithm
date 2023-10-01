#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int cnt = 0;
vector<int> mem(1000001, 0);
int main(){
	int N, index = 2;
	cin >> N;

	for (index; index <= N; index++) {
		mem[index] = mem[index - 1] + 1;
		if (index % 2 == 0) {
			mem[index] = min(mem[index], mem[index / 2] + 1);
		}
		if (index % 3 == 0) {
			mem[index] = min(mem[index], mem[index / 3] + 1);
		}
	}
	cout << mem[N];
}