#include<bits/stdc++.h>
using namespace std;
#define ll long long

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

	ll  n, t, m, k, l, r;
	string s, name1, name2;
	cin >> name1;
	cin >> s;
	cin >> name2;
	cout << s << endl;
	// l = s.find_first_of(' ');
	// r = s.find_last_of(' ');
	// cout << l << " " << r << endl;
	// name1 = s.substr(0, l);
	// name2 = s.substr(r + 1, s.size() - 1 - r);


	cout << name1 << " " << name2;
	return 0;


}



















