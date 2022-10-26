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

// void fun(int i, string a, string temp, int& cnt) {
// 	if (i == a.size() || temp.size() > 3) {
// 		if (temp == "QAQ") {
// 			cnt++;
// 			return;
// 		}
// 		return;
// 	}
// 	fun(i + 1, a, temp + a[i], cnt);
// 	fun(i + 1, a, temp, cnt);
// 	return;

// }

// int L(int i, int j, vector<int>&a, vector<int>&b, vector<vector<int> > &dp, int& maxi) {
// 	if (i == 0) {
// 		int sum = 0;
// 		int ans = 0;
// 		for (int k = 0; k < j; k++) {

// 			sum += b[k];
// 			ans = max(sum, ans);
// 		}


// 		return dp[i][j] = ans;
// 	}
// 	if (j == 0) {
// 		int sum = 0;
// 		int ans = 0;
// 		for (int k = 0; k < i; k++) {
// 			sum += a[k];
// 			ans = max(sum, ans);
// 		}


// 		return dp[i][j] = ans ;
// 	}
// 	if (dp[i][j]) return dp[i][j];

// 	dp[i][j] = max(a[i - 1] + L(i - 1, j, a, b, dp, maxi), max(max(b[j - 1] + L(i, j - 1, a, b, dp, maxi ), L(i - 1, j, a, b, dp, maxi)), L(i , j - 1, a, b, dp, maxi)) );
// 	maxi = max(maxi, dp[i][j]);
// 	return dp[i][j];
// }



int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int n, t, m;
	string s;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> a(n, 0);
		int temp = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			a[i] += temp;
			temp = a[i];

		}
		cin >> m;
		vector<int> b(m, 0);
		temp = 0;
		for (int i = 0; i < m; i++) {
			cin >> b[i];
			b[i] += temp;
			temp = b[i];

		}
		int mx1 = 0; int mx2 = 0;
		for (int i = 0; i < n; i++) {
			mx1 = max(a[i], mx1);
		}
		for (int i = 0; i < m; i++) {
			mx2 = max(b[i], mx2);
		}
		cout << mx1 + mx2 << endl;


	}

	// cout << cnt;
	return 0;
}



















