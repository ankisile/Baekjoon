#include <stdio.h>

int d[1000001]; //저장할 배열 설정
int f(int n);
int min(int a, int b);

int main() {
	int n, result;
	scanf("%d", &n);

	result=f(n);
	printf("%d\n", result);
}

int f(int n) {
	
	int result;

	if (n == 1)
		return 0;
	if (d[n] != 0)
		return d[n];
	else {
		result = f(n - 1) + 1;
		if (n % 3 == 0)
			result = min(result, f(n / 3) + 1);
		else if (n % 2 == 0)
			result = min(result, f(n / 2) + 1);
		d[n] = result;
		return result;
	}
}

int min(int a, int b) {
	if (a < b)
		return a;
	else
		return b;

}
