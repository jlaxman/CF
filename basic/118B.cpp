#include<bits/stdc++.h>
using namespace std;
void fun(int i, int n) {

	if (i == n) {
		for (int k = 0; k <= n; k++) {
			if (k != n) cout << k << " ";
			else cout << k;
		}
		for (int k = n + 1; k < 2 * n + 1; k++) {
			cout << " " << i - k + n;
		}
		cout << endl;
		return;
	}
	for (int k = 0; k < n - i; k++) {
		if (k != n - i - 1) cout << "  ";
		else cout << " ";
	}
	for (int k = n - i; k <= n; k++) {
		cout << " " << k - n + i;
	}
	for (int k = n + 1; k <= n + i; k++) {
		cout << " " << i - k + n;
	}
	cout << endl;

	fun(i + 1, n);
	for (int k = 0; k < n - i; k++) {
		if (k != n - i - 1) cout << "  ";
		else cout << " ";
	}
	for (int k = n - i; k <= n; k++) {
		cout << " " << k - n + i;
	}
	for (int k = n + 1; k <= n + i; k++) {
		cout << " " << i - k + n;
	}
	cout << endl;
	return;


}

int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	fun(0, n);


	return 0;
}
