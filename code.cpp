#include<bits/stdc++.h>
using namespace std;
// #define int long long int


int recurseSolve(int i, int b, vector<int>& bQ, vector<int>&c, vector<vector<int> >& dp) {
	if (b < 0) {
		return 0;
	}
	if (i >= c.size()) {
		return 0;
	}
	if (dp[i][b] != -1) return dp[i][b];
	int ans1 = 0;
	int ans2 = 0;
	if (b >= c[i]) {
		ans1 = bQ[i] + recurseSolve(i, b - c[i], bQ, c, dp);
	}
	ans2 = recurseSolve(i + 1, b, bQ, c, dp);
	return dp[i][b] = max(ans1, ans2);
}


int32_t main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, b; cin >> n >> b;

	vector<int> bQ(n, 0);
	vector<int> c(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> bQ[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	vector<vector<int> > dp(n + 1, vector<int>(b + 2, -1));
	cout << recurseSolve(0, b, bQ, c, dp);


	return 0;

}
