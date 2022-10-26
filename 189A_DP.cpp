#include<bits/stdc++.h>
using namespace std;
#define ll long long
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


long long fun(int n, int a, int b, int c, vector<long long>& dp) {
	if (n == 0) return 0;
	if (n < 0) return -INF;
	if (dp[n] != -1) return dp[n];
	long long f1 = 1 + fun(n - a, a, b, c, dp);
	long long f2 = 1 + fun(n - b, a, b, c, dp);
	long long f3 = 1 + fun(n - c, a, b, c, dp);
	return dp[n] = max(f1, max(f3, f2));
}


int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int  n, t, m, k, l, r, a, c, b;
	// cin >> s;
	cin >> n >> a >> b >> c;
	vector<long long> dp(n + 1, -1);

	cout << fun(n, a, b, c, dp);





	return 0;


}



















