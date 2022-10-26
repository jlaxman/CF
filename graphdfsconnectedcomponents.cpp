#include<bits/stdc++.h>
using namespace std;


void dfs(int i, vector<bool>& visited, vector<int> adj[]) {
	for (int k : adj[i]) {
		if (!visited[k]) {
			visited[k] = true;
			dfs(k, visited, adj);
		}
	}
	return ;
}


int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif
	int v;
	int e;
	cin >> v >> e;
	vector<int> adj[v + 1];
	int f, s;
	for (int i = 0; i < e; i++) {
		cin >> f >> s;
		adj[f].push_back(s);
		adj[s].push_back(f);
	}
	vector<bool> visited(v + 1, false);
	int cnt = 0;
	for (int i = 1; i <= v; i++) {
		if (!visited[i]) {
			visited[i] = true;
			dfs(i, visited, adj);
			cnt++;
		}
	}
	cout << cnt;


	return 0;
}