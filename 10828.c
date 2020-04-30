#include <stdio.h>
#include <string.h>

int upper = -1;
int stack[10000];
void push(int val);
int pop();
int empty();
int size();
int top();

int main() {
	int n, num;
	char arr[20];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		if (!strcmp(arr, "push")) {
			scanf("%d", &num);
			push(num);
		}
		else if (!strcmp(arr, "pop"))
			printf("%d\n", pop());
		else if (!strcmp(arr, "size"))
			printf("%d\n", size());
		else if (!strcmp(arr, "empty"))
			printf("%d\n", empty());
		else if (!strcmp(arr, "top"))
			printf("%d\n", top());
	}
	return 0;	
}


void push(int val) {

	stack[++upper] = val;
}

int pop() {

	if (empty())
		return -1;
	else
		return stack[upper--];
}


int size() {

	return upper + 1;
}

int empty() {

	if (upper == -1)
		return 1;
	else return 0;
}

int top() {
	if (empty())
		return -1;
	else
		return stack[upper];

}
