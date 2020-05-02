#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binary_search(int s[], int x, int left, int right);
int compare(const void *a, const void *b);

int main() {
	int n, m, result;
	int s[1000001] = { 0 }; //저장할 배열 설정
	int p[1000001] = { 0 }; //저장할 배열 설정

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &s[i]);
	qsort(s, n, sizeof(int), compare);

	scanf("%d", &m);
	for (int j = 0; j < m; j++) {
		scanf("%d", &p[j]);
		p[j] = binary_search(s, p[j], 0, n-1);
	}
	for (int j = 0; j < m; j++)
		printf("%d\n", p[j]);
}


int binary_search(int s[], int x, int left, int right) {

	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (x==s[mid])
			return 1;
		else if (x<s[mid])
			right = mid - 1;
		else if (x>s[mid])
			left = mid + 1;
	}
	return 0;
	
}

int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
	int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

	if (num1 < num2)    // a가 b보다 작을 때는
		return -1;      // -1 반환

	if (num1 > num2)    // a가 b보다 클 때는
		return 1;       // 1 반환

	return 0;    // a와 b가 같을 때는 0 반환
}
