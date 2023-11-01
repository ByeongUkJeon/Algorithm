#include<iostream>
#include<vector>
using namespace std;

long long D = 1000000007;

vector<vector <long long>> A;
vector<vector <long long>> res;
vector<vector <long long>> mul(vector<vector <long long>> &A, vector<vector <long long>> &B) {
	vector<vector <long long>>C(2, vector<long long>(2, 0));

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int l = 0; l < 2; l++) {
				C[i][j] += (A[i][l] % D) * (B[l][j] % D);
			}
			C[i][j] %= D;
		}
	}

	return C;
}

vector<vector <long long>> powe(vector<vector <long long>> &A, long long B) {
	if (B == 0) {
		return A;
	}
	if (B == 1) {
		return A;
	}
	else {
		if (B % 2 == 0) {
			vector<vector <long long>> tmp = powe(A, B / 2);
			return mul(tmp, tmp);
		}
		else {
			vector<vector <long long>> tmp = powe(A, B - 1);
			return mul(A, tmp);
		}
	}
}

int main() {
	long long n;
	cin >> n;
	vector<long long> t;
	t.push_back(1);
	t.push_back(1);
	A.push_back(t);
	t.clear();
	t.push_back(1);
	t.push_back(0);
	A.push_back(t);
	res = powe(A, n);
	cout << res[1][0];
}