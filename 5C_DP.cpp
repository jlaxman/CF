#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000000 + 7;
#define ll long long
const long long INF = 1e14;


void print(vector<string> st) {
	string ans;
	for (auto a : st) {
		ans += ("/" + a);
	}
	ans += '/';
	cout << ans << endl;
}



int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif





	int t, q, x, h, R;
	// cin >> t;
	// cin.ignore();
	string s;
	cin >> s;
	int mxsz = 0;
	int n = s.size();
	vector<int> freq(n + 1, 0);
	vector<int> obin(n, 0);
	vector<int> ex(n, 0);
	stack<int>st;
	for (int i = 0; i < n; i++) {
		if (s[i] == ')') {
			if (st.empty()) {
				obin[i] = -1;
				ex[i] = -1;
			} else {
				int id = st.top();
				st.pop();
				obin[i] = id;
				ex[i] = id;
				if (id - 1 >= 0 && s[id - 1] == ')' && obin[id - 1] >= 0) {
					ex[i] = ex[id - 1];
				}
				int l = i - ex[i] + 1;
				freq[l]++;
				mxsz = max(mxsz, l);
			}
		} else st.push(i);


	}
	if (freq[mxsz] == 0) freq[mxsz] = 1;
	cout << mxsz << " " << freq[mxsz];













	return 0;
}


