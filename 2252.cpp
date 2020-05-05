#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

#define MAX 32001

vector <int> node[MAX];
int indegree[MAX];

void topologySort(int n);

int main() {
	int n, m, a, b;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		indegree[b]++;
		node[a].push_back(b);
	}
	topologySort(n);

}

void topologySort(int n) {
	queue <int> q;
	for (int i = 1; i <= n; i++) {
		if (indegree[i] == 0) q.push(i);
	}
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for (int i = 0; i < node[x].size(); i++) {
			int y = node[x][i];
			if (--indegree[y] == 0)
				q.push(y);
		}
	}
}
