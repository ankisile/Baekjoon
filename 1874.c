#include <stdio.h>

void push(int val);
void pop();
int top();

int stack[100001];
char symbol[200001];

int index = -1, sindex = -1;

int main() {
	int n;
	int arr[100001];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int j = 1, i=0; j <= n; j++) {
		push(j);
		while (index>-1&&arr[i] == top()) {
			pop();
			i++;
		}
	}
	if (index != -1)
		printf("NO\n");
	else
		for (int i = 0; i <= sindex; i++)
			printf("%c\n", symbol[i]);
}

void push(int val) {
	stack[++index]=val;
	symbol[++sindex]='+';
}

void pop() {
	index--;
	symbol[++sindex] = '-';
}

int top() {
	return stack[index];
}
