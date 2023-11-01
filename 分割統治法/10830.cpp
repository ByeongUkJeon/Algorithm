#include<iostream>
#include<vector>
using namespace std;
vector<vector <long long>> A;
vector<vector <long long>> T;
vector<vector <long long>> res;
long long t = 0;
vector<long long> At;

vector<vector<long long>> mul(vector<vector <long long>> &A, vector<vector <long long>> &T, long long N) {
	vector<vector<long long>> T2(N, vector<long long>(N, 0));
	for (long long i = 0; i < N; ++i) {
		for (long long j = 0; j < N; ++j) {
			t = 0;
			for (long long l = 0; l < N; ++l) {
				t += (A[i][l] % 1000 * T[l][j] % 1000);
			}
			T2[i][j] += t % 1000;
		}
	}
	
	return T2;

}
vector<vector <long long>> powe(vector<vector <long long>> &A, long long B, long long N) {
	if (B == 1) {
		for (long long i = 0; i < N; ++i) {
			for (long long j = 0; j < N; ++j) {

				A[i][j] = A[i][j] % 1000;
			}
		}
		return A;
	}

	else {
		if (B % 2 > 0) {
			vector<vector <long long>> tmp = powe(A, B - 1, N);
			return mul(A, tmp, N);
			
		}
		else {
			vector<vector <long long>> tmp = powe(A, B / 2, N);
			return mul(tmp, tmp, N);
		}
	}
}
int main() {
	long long N, B, t;
	cin >> N >> B;
	for (long long i = 0; i < N; i++) {
		for (long long j = 0; j < N; j++) {
			cin >> t;
			At.push_back(t);
		}
		A.push_back(At);
		T.push_back(At);
		At.clear();
	}

	res = powe(A, B, N);
	for (long long i = 0; i < N; i++) {
		for (long long j = 0; j < N; j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
}