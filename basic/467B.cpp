#include<bits/stdc++.h>
using namespace std;

bool check(int x, int y, int k, int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if ((x & (1 << i) ^ (y & (1 << i)))) cnt++;
	}
	return (cnt <= k) ;

}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, m, k;
	cin >> n >> m >> k;

	int x[m + 1];
	for (int i = 0; i < m + 1; i++) {
		cin >> x[i];
	}
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		if (check(x[i], x[m], k, n)) cnt++;

	}
	cout << cnt;


	return 0;
}
