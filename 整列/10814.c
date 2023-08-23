#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int age;
	char name[101];
} acc;
acc sorted[100001];
void merge(acc * arr, int left, int mid, int right) {
	int i, j, k;
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right) {
		if (arr[i].age <= arr[j].age) {
			sorted[k++] = arr[i++];
		}
		else {
			sorted[k++] = arr[j++];
		}
	}
	while (i <= mid)
		sorted[k++] = arr[i++];
	while (j <= right)
		sorted[k++] = arr[j++];
	for (int index = left; index < k; index++)
		arr[index] = sorted[index];

}

void merge_sort(acc * arr, int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		merge_sort(arr, left, mid);
		merge_sort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}

}
int main() {
	int N;

	scanf("%d", &N);
	acc * account = (acc*)malloc(sizeof(acc) * (N+1));
	for (int i = 0; i < N; i++) {
		scanf("%d %s", &account[i].age, account[i].name);
	}
	merge_sort(account, 0, N - 1);
	for (int i = 0; i < N; i++) {
		printf("%d %s\n", account[i].age, account[i].name);
	}
	return 0;
}
