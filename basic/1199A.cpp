#include<bits/stdc++.h>
using namespace std;

bool check(int start, int end, int val, vector<int> vec) {
	if (start < 0) start = 0;
	if (end > vec.size() - 1) end = vec.size() - 1;
	for (int i = start; i <= end; i++) {
		if (vec[i] < val) return false;
	}
	return true;

}


int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int n, x, y;
	cin >> n >> x >> y;
	vector<int> vec;
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		vec.push_back(temp);
	}
	int start, end;
	for (int i = 0; i < n; i++) {

		start = i - x;
		end = i + y;
		if (check(start, end, vec[i], vec)) {
			cout << i + 1;
			return 0;
		}
	}


	return 0;
}
