#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e14;
long long gcd(long long int a, long long int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}




int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int  n, t, m, k, l, r, a, c, b, q;
	// cin >> s;
	cin >> t;
	while (t--) {
		cin >> n >> q;
		vector< vector<long long> > dp(n + 1 , vector<long long>(2, 0));
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) cin >> a[i];

		dp[n - 1][1] = a[n - 1];
		dp[n - 1][0] = 0;
		for (long long i = n - 2; i >= 0; i--) {
			dp[i][1] = max(dp[i + 1][1], a[i] - dp[i + 1][0]);
			dp[i][0] = min(dp[i + 1][0], a[i] - dp[i + 1][1]);
		}
		cout << dp[0][1] << endl;




	}


	return 0;


}



















