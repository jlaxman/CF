#include<bits/stdc++.h>
using namespace std;

bool fun (int i, int n, int m, int& mini, int moves, vector<vector<bool> >& dp) {
	if (i == n - 1) {
		if (moves % m == 0) {
			mini = min(mini, moves);
			return true;
		}
		return false ;
	}
	if (dp[i][moves]) return true;
	if (fun(i + 1, n, m, mini, moves + 1, dp) == true) return dp[i][moves] = true;
	if (i < n - 2) {
		if (fun(i + 2, n, m, mini, moves + 1, dp) == true) return dp[i][moves] = true;
	}
	return false;

}

int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;
	int mini = INT_MAX;
	int moves = 0;
	vector<vector<bool> > dp(n, vector<bool>(n, false));
	fun(-1, n, m, mini, moves, dp);
	if (mini != INT_MAX) cout << mini;
	else cout << -1;


	return 0;
}
