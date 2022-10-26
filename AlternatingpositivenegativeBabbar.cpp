#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000000 + 7;
#define ll long long
const long long INF = 1e14;






int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif



	int n; cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) cin >> vec[i];
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (vec[i] < 0 ) {
			swap(vec[i], vec[j]);
			j++;
		}
	}
	int neg = j;
	int pos = n - j;
	int left = neg - 1;
	int right = neg;
	if (neg < pos) {
		if (neg % 2 == 0) {
			for (int i = neg - 1; i >= 0; i -= 2) {
				swap(vec[i], vec[right]);
				right += 2;
			}
		}
		else {
			right++;
			for (int i = neg - 2; i >= 0 && right < n; i -= 2) {
				swap(vec[i], vec[right]);
				right += 2;
			}

		}
	} else {
		reverse(vec.begin(), vec.end());
		right = pos;
		if (pos % 2 == 0) {
			right++;
			for (int i = pos - 2; i >= 0; i -= 2) {
				swap(vec[i], vec[right]);
				right += 2;
			}
		}
		else {

			for (int i = pos - 1; i >= 0 && right < n; i -= 2) {
				swap(vec[i], vec[right]);
				right += 2;
			}

		}

	}

	for (auto a : vec) {
		cout << a << " ";
	}




	return 0;

}



















