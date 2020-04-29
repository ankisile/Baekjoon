#include <stdio.h>
#include <math.h>

int visit(int n, int r, int c);
int quadrant(int half, int r, int c);

int n, r, c, result=0;

int main() {
	
	int result;
	scanf("%d%d%d", &n, &r, &c);
	result=visit(n, r, c);
	printf("%d\n", result);
}

int visit(int n, int r, int c){

	int half = pow(2, n - 1);

	if (n == 1) {
		return quadrant(n, r, c);
	}
	else {
		return quadrant(half, r, c)*pow(2, 2 * (n - 1)) + visit(n-1, r<half?r:r-half, c<half?c:c-half);
	}
}

int quadrant(int half, int r, int c) {

	if (r < half && c < half)
		return 0;
	else if (r < half && c >= half)
		return 1;
	else if (r >= half && c < half)
		return 2;
	else if (r >= half && c >= half)
		return 3;

}
