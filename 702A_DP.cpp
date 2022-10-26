#include<bits/stdc++.h>
using namespace std;

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

int fun(int i, vector<int>& a, vector<int> &dp) {
	if (i == a.size() - 1) return dp[i] = 1;
	if (dp[i] != -1) return dp[i];

	if (a[i] < a[i + 1]) return dp[i] = 1 + fun(i + 1, a, dp);
	else {
		fun(i + 1, a, dp);
		return dp[i] = 1;
	}
}





int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<int> a(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> dp(n + 1, 0);
	for (int i = 0; i <= n; i++) {
		dp[i] = -1;
	}
	fun(0, a, dp);
	int maxi = 0;
	for (int i = 0; i < n; i++) {
		maxi = max(dp[i], maxi);
	}
	cout << maxi << endl;


	return 0;
}



















