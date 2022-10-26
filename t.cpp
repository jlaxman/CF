// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    long long dp[1000001];
public:
    long long fun(int i, int arr[], int n) {
        if (i == n) return 0;
        if (dp[i] != -1) return dp[i];
        long long op1 = arr[i] + fun(i + 1, arr, n);
        long long op2 = arr[i];
        return dp[i] = max(op1, op2);
    }
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {
        memset(dp , -1, sizeof dp);
        // Your code here

        fun(0, arr, n);
        long long mxsum = arr[0];
        for (int i = 0; i < n; i++) {
            mxsum = max(mxsum, fun(i, arr, n));
        }
        return mxsum;

    }
};

// { Driver Code Starts.

int main()
{
    int t, n;

    cin >> t; //input testcases
    while (t--) //while testcases exist
    {

        cin >> n; //input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; //inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
// } Driver Code Ends