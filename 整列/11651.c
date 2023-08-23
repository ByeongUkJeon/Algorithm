#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int x;
	int y;
} pos;
pos sorted[100001];
void merge(pos * arr, int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right) {
		if (arr[i].y < arr[j].y) {
			sorted[k++] = arr[i++];
		}
		else if (arr[i].y == arr[j].y) {
			if (arr[i].x < arr[j].x) {
				sorted[k++] = arr[i++];
			}
			else sorted[k++] = arr[j++];
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

void merge_sort(pos * arr, int left, int right) {
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
	pos * point = (pos*)malloc(sizeof(pos) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &point[i].x, &point[i].y);
	}
	merge_sort(point, 0, N - 1);
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", point[i].x, point[i].y);
	}
	return 0;
}
