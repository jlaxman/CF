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





int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int n, t;
	string s;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> a(n, 0);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> rc(n + 1, 0);
		for (int i = 0; i < n; i++) {
			if (i - (a[i] - 1) >= 0) {
				rc[i - (a[i] - 1)]++;
			}
			else rc[0]++;
			rc[i + 1]--;
		}
		if (rc[0] > 0) cout << 1 << " ";
		else cout << 0 << " ";
		for (int i = 1; i < n; i++) {
			rc[i] += rc[i - 1];
			if (rc[i] > 0) cout << 1 << " ";
			else cout << 0 << " ";
		}
		cout << endl;

	}
	// vector<int> dp(n + 1, 0);
	// for (int i = 0; i <= n; i++) {
	// 	dp[i] = -1;
	// }


	// cout << cnt;
	return 0;
}



















