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

// long long fun (long long i, vector<long long>& s, vector<long long > & dp) {
// 	if (i >= s.size()) {
// 		return 0;
// 	}
// 	if (dp[i] != -1) return dp[i];
// 	else {
// 		long long ans = 0;
// 		long long maxi = 0;
// 		for (long long k = 2 * i; k < s.size(); k += i) {
// 			if (s[i] < s[k]) {
// 				ans = 1 + fun(k, s, dp);
// 				maxi = max(ans, maxi);
// 			}

// 		}
// 		return dp[i] = maxi;
// 	}
// }
// long long fun(int i, vector<vector<long long> >& r, vector<long long>& dp) {
// 	if (i == r.size()) {
// 		return 0;
// 	}
// 	if (dp[i] != -1) return dp[i];
// 	else {
// 		vector<long long> v(3, 0);
// 		v[0] = r[i][1];
// 		v[1] = -INF;
// 		v[2] = -INF;
// 		int ind = lower_bound(r.begin(), r.end(), v) - r.begin();
// 		return dp[i] = max(r[i][1] - r[i][0] + r[i][2] + fun(ind, r, dp), fun(i + 1, r, dp));
// 	}

// }

bool predicate(long long m,  long long n, long long k) {
	long long ans = (((k - m + 1) * (k + m)) / 2) + 1;

	return ans >= n;
}

int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	long long n, t, k, l, r, c, q, x;


	t = 1;
	while (t--) {
		cin >> n >> k;
		long long m = (1LL * (k) * (k - 1) / 2) + 1;
		if (n > m) {
			cout << -1 << endl;
			return 0;
		}
		if (n == 1) {
			cout << 0 << endl;
			return 0;
		}
		long long l = 1;

		long long r = k - 1;
		long long ans = m;
		while (l <= r) {
			long long mid = l + ((r - l) / 2);
			if (predicate(mid, n, k - 1)) {
				ans = min(ans, k - 1 - mid + 1);
				l = mid + 1;
			} else {
				r = mid - 1;
			}
		}
		cout << l << endl;








	}

	return 0;

}



















