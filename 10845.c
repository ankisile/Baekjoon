#include <stdio.h>
#include <string.h>

int front = -1, rear = -1;
int stack[10000];

void push(int val);
int pop();
int size();
int empty();
int f();
int back();

int main() {
	
	int n, val;
	char s[20];
	int result;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		if (!strcmp(s, "push")) {
			scanf("%d", &val);
			push(val);
		}
		else if(!strcmp(s, "pop")){
			result=pop();
			printf("%d\n", result);
		}

		else if (!strcmp(s, "size")) {
			result = size();
			printf("%d\n", result);
		}

		else if (!strcmp(s, "empty")) {
			result = empty();
			printf("%d\n", result);
		}

		else if (!strcmp(s, "front")) {
			result = f();
			printf("%d\n", result);
		}

		else if (!strcmp(s, "back")) {
			result = back();
			printf("%d\n", result);
		}


	}
	
}

void push(int val){
	stack[++rear] = val;
}

int pop(){
	if (empty())
		return -1;
	else
		return stack[++front];
}

int size(){
	return rear - front;
}

int empty(){
	if (front == rear)
		return 1;
	else return 0;
}

int f() { //front 명령어와 상호작용
	if (empty()) return -1;
	else return stack[front + 1];
}

int back(){
	if (empty()) return -1;
	else return stack[rear];
}
