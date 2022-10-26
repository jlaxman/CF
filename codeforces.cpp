#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000000 + 7;
#define int long long int
const long long INF = 1e14;



int dfs(int s, vector<vector<int> >& adj, vector<int> & dp, int n) {
	if (s == n) return 1;
	if (dp[s] != -1) return dp[s];
	int ans = 0;
	for (int nbr : adj[s]) {
		ans += (dfs(nbr, adj, dp, n) % MOD);
		ans %= MOD;
	}
	return dp[s] = ans;

}


int32_t main() {

#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int n, m; cin >> n >> m;
	vector<vector<int> > adj(n + 1);
	vector<int> dp(n + 1, -1);
	for (int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
	}

	cout << dfs(1, adj, dp, n) << endl;





	return 0;

}