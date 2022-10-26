#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000000 + 7;
#define ll long long
const long long INF = 1e14;

int power(long long x, unsigned int y, int p)
{
	int res = 1;     // Initialize result

	x = x % p; // Update x if it is more than or
	// equal to p

	if (x == 0) return 0; // In case x is divisible by p;

	while (y > 0)
	{
		// If y is odd, multiply x with result
		if (y & 1)
			res = (res * x) % p;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % p;
	}
	return res;
}


int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif
	int t;
	t = 1;
	while (t--) {

		string s; cin >> s; cout << s << endl;
		vector<int> alpha(26, 0);
		for (int i = 0; i < 26; i++) cin >> alpha[i];
		int k; cin >> k;
		k = 2;
		cout << k << endl;
		int n = s.size();
		set<string> st;
		for (int i = 0; i < n; i++) {
			int K = 0;
			string temp;
			for (int j = i; j < n; j++) {
				temp += s[j];
				K += (int)(alpha[s[j] - 'a'] == 0);
				if (K <= k) {
					st.insert(temp);
				} else {
					break;
				}
			}

		}
		cout << st.size();
		cout << endl << endl;
		for (auto p : st) {
			cout << p << endl;
		}



	}




	return 0;
}

