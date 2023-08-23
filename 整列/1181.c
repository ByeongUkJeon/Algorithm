#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *sorted[20001];
int compare(const void *a, const void *b) {
	return strcmp(*(char **)a, *(char **)b);
	//return(strcmp(*(char **)a, *(char **)b));
}
void merge(char **str, int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right) {
		if (strlen(str[i]) < strlen(str[j])) {
			strcpy(sorted[k++], str[i++]);
		}
		else if (strlen(str[i]) == strlen(str[j])) {
			if (strcmp(str[i], str[j]) >  0) {
				strcpy(sorted[k++], str[j++]);
			}
			else {
				strcpy(sorted[k++], str[i++]);
			}
	
		}
		else
			strcpy(sorted[k++], str[j++]);
	}
	while (i <= mid)
		strcpy(sorted[k++], str[i++]);
	while (j <= right)
		strcpy(sorted[k++], str[j++]);
	for (int index = left; index < k; index++)
		strcpy(str[index], sorted[index]);
}

void merge_sort(char** str, int left, int right) {
	int mid;

	if (left < right) {
		mid = (left + right) / 2;
		merge_sort(str, left, mid);
		merge_sort(str, mid + 1, right);
		merge(str, left, mid, right);
	}
}
int main() {
	int N;
	char * str[20001];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		str[i] = (char *)malloc(sizeof(char)*(51));
		sorted[i] = (char *)malloc(sizeof(char)*(51));
	}
	for (int i = 0; i < N; i++) {
		scanf("%s", str[i]);
	}
	//qsort((void*)str, N, sizeof(str[0]), compare);
	merge_sort(str, 0, N - 1);
	printf("%s\n", str[0]);
	for (int i = 1; i < N; i++) {

		if (strcmp(str[i-1], str[i]) != 0) {		
			printf("%s\n", str[i]);
		}
	}
	return 0;
}