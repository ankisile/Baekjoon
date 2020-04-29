#include <stdio.h>
#include <math.h>

void visit(int size, int y, int x);

int n, r, c, result=0;

int main() {
	
	scanf("%d%d%d", &n, &r, &c);
	visit(pow(2, n), 0, 0);
}

void visit(int size, int y, int x){

	if(size==2)
	{
		if (y == r&&x == c) { //첫번째 칸
			printf("%d\n", result);
			return;
		}
		result++;
		if (y == r&&x + 1 == c) { //두번째 칸
			printf("%d\n", result);
			return;
		}
		result++;
		if (y + 1 == r && x == c) { //3번째 칸
			printf("%d\n", result);
			return;
		}
		result++;
		if (y + 1 == r && x + 1 == c) { //4번째칸
			printf("%d\n", result);
			return;
		}
		result++;
		return; //같은 칸이 없으면 그냥 리턴
	}

	visit(size / 2, y, x); //1사분면
	visit(size / 2, y, x+size/2); //2사분면
	visit(size / 2, y+size/2, x); //3사분면
	visit(size / 2, y + size / 2, x + size / 2); //4사분면
	
}
