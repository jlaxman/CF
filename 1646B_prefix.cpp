#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

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

	long long  n, t, k, l, r, a, c, b, q, x, s;
	// cin >> s;
	cin >> t;
	while (t--) {
		cin >> n;
		long long a[n] , b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		long long m = (n - 1) / 2;
		sort(a, a + n, greater<long long>());
		// for (int i = 0; i < n; i++) cout << a[i] << " ";
		// cout << endl;

		sort(b, b + n);
		// for (int i = 0; i < n; i++) cout << b[i] << " ";
		// cout << endl;

		long long prefixa[n];
		long long prefixb[n];
		prefixa[0] = a[0];
		prefixb[0] = b[0];
		for (int i = 1; i < n; i++) {
			prefixa[i] = prefixa[i - 1] + a[i];
			prefixb[i] = prefixb[i - 1] + b[i];
		}
		int flag = 0;
		for (long long i = 0; i < m; i++ ) {
			if (prefixa[i] > prefixb[i + 1] ) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}



	}


	return 0;


}



















