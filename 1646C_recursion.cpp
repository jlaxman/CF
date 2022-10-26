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

long long fact(long long i, vector<long long> & arr) {
	if (i == 1) {
		arr.push_back(1);
		return 1;
	}
	long long k = i * fact(i - 1, arr);
	arr.push_back(k);
	return k;

}


void fun(int i, vector<long long>& arr, long long sum, long long& minsz, long long sz, long long n) {
	if (i >= arr.size()) {
		if (n - sum >= 0) {
			minsz = min(minsz, (sz + __builtin_popcountll(n - sum)) );
			return ;
		}
		return ;
	}
	// int ind = upper_bound(arr.begin(), arr.end(), sum+arr[i]) - arr.begin();
	fun(i + 1, arr, sum + arr[i], minsz, sz + 1, n);

	fun(i + 1, arr,  sum, minsz, sz, n);


	return ;
}


int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	long long  n, t, k, l, r, a, c, b, q, x, s;
	// cin >> s;
	vector<long long> arr;
	fact(14, arr);
	// for (long long i = 2; i <= 40; i++) {
	// 	arr.push_back(1LL << i);
	// }
	// sort(arr.begin(), arr.end(), greater<int>());

	cin >> t;
	while (t--) {
		cin >> n;

		long long sum = 0;
		long long minsz = 1e15;
		long long sz = 0;
		int i = 0;
		// int i = upper_bound(arr.begin(), arr.end(), sum) - arr.begin();
		fun(0, arr, sum, minsz, sz, n);
		cout << minsz << endl;

	}


	return 0;


}



















