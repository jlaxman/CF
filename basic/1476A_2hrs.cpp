#include<bits/stdc++.h>
using namespace std;

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

bool check(string s1, string s2) {
	return s2.substr(s1.size()) == s1;
}
// bool fun( string s, string temp){
// 	if(temp.size()/ s.size()

// }


int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif
	int t;
	cin >> t ;
	long long  a, b,  g, w, r, n, k;
	string s1, s2;
	while (t--) {

		cin >> n >> k;

		if (k > n) {
			cout << (k + n - 1) / n << endl;
		}
		else {
			long long ans = 0;
			long long i = 1;
			if (n % k == 0) i = n / k;
			else i = (n / k) + 1;
			k *= i;
			cout << (k + n - 1) / n << endl;


		}







	}
























	return 0;
}
















