#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000000 + 7;

const long long INF = 1e14;

// long long gcd(long long int a, long long int b)
// {
// 	if (b == 0)
// 		return a;
// 	return gcd(b, a % b);
// }

// // Function to return LCM of two numbers
// long long lcm(int a, int b)
// {
// 	return (a / gcd(a, b)) * b;
// }

// long long fact(long long i, vector<long long> & arr) {
// 	if (i == 1) {
// 		arr.push_back(1);
// 		return 1;
// 	}
// 	long long k = i * fact(i - 1, arr);
// 	arr.push_back(k);
// 	return k;

// }

// int cnt = 0;
// int fun(int i, int n,  int k, vector<vector<int> >& dp) {
// 	if (k <= 0) {

// 		return 1;
// 	}
// 	if (dp[i][k] != -1) return dp[i][k];
// 	int ans = 0;
// 	//pick
// 	for (int j = i; j <= n; j += i) {

// 		ans += (fun(j, n, k - 1, dp) % mod);
// 		ans =  (ans % mod);

// 	}




// 	return dp[i][k] = ans;
// }

long long fun(long long i, vector<long long>& a, vector<long long > & dp) {
	if (i == a.size()) {
		return 0;
	}
	if (dp[i] != -1) return dp[i];
	else {
		return dp[i] = min(abs(a[i] + fun(i + 1, a, dp)), abs(fun(i + 1, a, dp) - a[i]));
	}
}


int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	long long n, t, k, l, r, a, c, b, q, x, s;


	cin >> t;
	while (t--) {
		cin >> n;
		vector<long long> a(n);
		int flag = 0;
		for (long long i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] > 0) {
				flag = 1;
			}
		}
		vector<long long> dp(n + 1, -1);
		fun(0, a, dp);
		// if (flag == 0) {
		// 	cout << 0LL << endl;
		// }
		// else {
		// 	if (dp[0] == 0) cout << 1 << endl;
		// 	else {
		cout << dp[0] << endl;
		// 	}
		// }






	}


	return 0;


}



















