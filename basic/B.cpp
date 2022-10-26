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
void printin(vector<int> a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	cout << endl;

}


int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif
	long long n, b, t, m, k;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> a(n, 0);
		for (int i = 0; i < n; i++) {
			a[i] = n - i;
			cout << a[i] << " ";
		}
		cout << endl;
		for (int i = n - 1; i >= 1; i--) {
			swap(a[i], a[i - 1]);
			printin(a);
			swap(a[i], a[i - 1]);
		}


	}










	return 0;
}
