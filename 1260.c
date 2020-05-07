#include <stdio.h>
#define MAX 1001

int visit1[MAX]; //dfs에서 방문했을때 1로 바꿔줄 배열
int visit2[MAX]; //bfs에서 방문했을때 1로 바꿔줄 배열
int c[MAX][MAX]; //노드가 이어져 있음을 보여주는 인접배열

int queue[MAX];

int front = -1, rear = -1;

void dfs(int v, int n);
void bfs(int v, int n);
void addq(int val);
int deleteq();

int main() {
	int n, m, v, a, b;
	scanf("%d%d%d", &n, &m, &v);
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		c[a][b] = 1;
		c[b][a] = 1;//노드간 연결
	}
	dfs(v, n);
	printf("\n");
	bfs(v, n);
}

void dfs(int v, int n) {
	visit1[v] = 1;//v는 방문했으니 1로 바꿔줌
	printf("%d ", v);
	for (int i = 1; i <= n;i++){ //i는 1부터 n까지(1부터 시작하는 이유:노드이기때문) 
		if (c[v][i]==1&& !visit1[i]) //노드 v와 i가 이어져 있고 i에 방문하지 않았으면
			dfs(i, n); //dfs(i,n)(i에 방문) 실행
	}
}

void bfs(int v, int n) {
	visit2[v] = 1; //v는 방문했으니 1로 바꿔줌
	printf("%d ", v);
	addq(v); //v를 큐에 삽입
	while (front != rear) { //큐가 비어있지 않을 동안
		v = deleteq(); //큐에서 하나 빼옴
		for (int i = 1; i <= n; i++) { //i는 1부터 n까지(1부터 시작하는 이유:노드이기때문)
			if (c[v][i]==1&&!visit2[i]) { //노드 v와 i가 이어져 있고 i에 방문하지 않았으면
				visit2[i]=1; //i에 방문(visit[i]를 1로 바꿔줌)
				printf("%d ", i); 
				addq(i); //큐에 i삽입
			}
		}
	}
}

void addq(int val) {
	if (rear < MAX) {
		queue[++rear] = val;
	}
}
int deleteq() {
	if (front != rear)
		return queue[++front];
}
