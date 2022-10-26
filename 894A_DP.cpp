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

	int n;
	string s;
	// vector<int> a(n, 0);
	// for (int i = 0; i < n; i++) {
	// 	cin >> a[i];
	// }
	// vector<int> dp(n + 1, 0);
	// for (int i = 0; i <= n; i++) {
	// 	dp[i] = -1;
	// }
	cin >> s;
	string temp;
	// int cnt = 0;
	vector<int> prefix(s.size(), 0);
	if (s[0] == 'Q') prefix[0] = 1;

	for (int i = 1; i < s.size(); i++) {
		if (s[i] == 'Q') prefix[i] = prefix[i - 1] + 1;
		else prefix[i] = prefix[i - 1];
	}
	int cnt = 0;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == 'A') {
			cnt += ((prefix[i - 1]) * (prefix[s.size() - 1] - prefix[i - 1]));
		}
	}

	cout << cnt;
	return 0;
}



















