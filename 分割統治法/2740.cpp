#include<iostream>
#include<vector>
using namespace std;
vector < vector <int>> A;
vector <int> At;
vector < vector <int>> B;
vector <int> Bt;
vector < vector <int>> C;
vector <int> Ct;

int main() {
	int N, M, K, t;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> t;
			At.push_back(t);
		}
		A.push_back(At);
		At.clear();
	}
	cin >> M >> K;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			cin >> t;
			Bt.push_back(t);
		}
		B.push_back(Bt);
		Bt.clear();
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			t = 0;
			for (int l = 0; l < M; ++l) {
				t += A[i][l] * B[l][j];
			}
			cout << t << " ";
		}
		cout << endl;
	}

}