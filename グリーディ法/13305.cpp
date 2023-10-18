#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long sum = 0, t, minprice = 0;
	vector<long long> distance;
	vector<long long> price;
	cin >> N;
	for (int i = 0; i < N - 1;i++) {
		cin >> t;
		distance.push_back(t);
	}
	for (int i = 0; i < N; i++) {
		cin >> t;
		price.push_back(t);
	}
	minprice = price[0];
	sum += minprice * distance[0];
	for (int i = 1; i < N - 1; i++) {
		minprice = min(minprice, price[i]);
		sum += minprice * distance[i];
	}
	cout << sum;
}