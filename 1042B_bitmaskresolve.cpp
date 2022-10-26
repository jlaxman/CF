#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int INF = 1e9;
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

	int  n, t, m, k, l, r;
	// cin >> s;
	cin >> n;
	int c[n];
	string s;

	int ma, mb, mc, mab, mbc, mca, mabc;
	ma = mb = mc = mab = mbc = mca = mabc = INF;
	int ans = INF;
	for (int i = 0; i < n; i++) {
		cin >> t;
		cin >> s;

		if (s == "A") {
			ma = min(ma, t);
		}
		if (s == "B") {
			mb = min(mb, t);
		}
		if (s == "C") {
			mc = min(mc, t);
		}
		if ( s == "AB" || s == "BA") {
			mab = min(mab, t);
		}
		if ( s == "BC" || s == "CB") {
			mbc = min(mbc, t);
		}
		if ( s == "CA" || s == "AC") {
			mca = min(mca, t);
		}
		if (s.size() == 3) {
			mabc = min(mabc, t);
		}
	}
	if (ma != INF && mb != INF && mc != INF) ans = min(ans, ma + mb + mc);
	if (ma != INF && mbc != INF) ans = min(ans, ma + mbc);
	if (mb != INF && mca != INF) ans = min(ans, mb + mca);
	if (mc != INF && mab != INF) ans = min(ans, mc + mab);
	if (mab != INF && mbc != INF) ans = min(ans, mab + mbc);
	if (mbc != INF && mca != INF) ans = min(ans, mbc + mca);
	if (mca != INF && mab != INF) ans = min(ans, mca + mab);
	if (mabc != INF) ans = min(ans, mabc);

	if (ans != INF) cout << ans;
	else cout << -1;



	return 0;


}



















