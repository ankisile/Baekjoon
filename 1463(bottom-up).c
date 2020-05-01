#include <stdio.h>

int min(int a, int b);

int main() {
	int n, result;
	int d[1000001] = { 0 }; //저장할 배열 설정
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		
		d[i] = d[i - 1] + 1;
		if (i % 3 == 0)
			d[i] = min(d[i], d[i / 3] + 1);
		else if (i % 2 == 0)
			d[i] = min(d[i], d[i / 2] + 1);
	}
	printf("%d\n", d[n]);

}


int min(int a, int b) {
	if (a < b)
		return a;
	else
		return b;

}
