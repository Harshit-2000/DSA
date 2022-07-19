#include <bits/stdc++.h>
using namespace std;

vector<int> graph[N];
bool visited[N];

int dfs(int vertex){
	visited[vertex] = true;

	cout << vertex << ' ';

	for (auto child : graph[vertex]){
		if (visited[child]) continue;

		dfs(child);
	}
}

int main(){
	int n, m;
	cin >> n >> m;

	for(int i = 0; i < m; i++){
		int v1, v2; cin >> v1 >> v2;

		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}

	for (int i = 0; i < n; i++){
		if (!visited[i]) dfs(i);
	}

	return 0;
}
