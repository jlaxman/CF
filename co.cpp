
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int partition(int arr[], int l, int r) {
        int mid = (l + r) / 2;
        int pivot = r;
        int left = l;
        int right = r - 1;
        swap(arr[mid], arr[r]);
        while (left < right ) {
            while ( arr[left] < arr[pivot]) {
                left++;
            }
            while (arr[right] > arr[pivot]) {
                right--;
            }
            if (left < right ) swap(arr[left], arr[right]);

        }
        if (arr[pivot] < arr[left]) {
            swap(arr[pivot], arr[left]);
            return left;
        }
        else return pivot;
    }
public:

    int kthSmallest(int arr[], int l, int r, int k) {
        if ( l <= r) {
            int j = partition(arr, l, r);
            if (k == j + 1) return arr[j];
            else {
                if (k < j + 1) {
                    return kthSmallest(arr, l, j - 1, k);
                }
                else {
                    return kthSmallest(arr, j + 1, r, k);
                }
            }

        }
        return 0;



    }
};

// { Driver Code Starts.

int main() {

#ifndef ONLINE_JUDGE

    freopen("input1.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
#endif
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int number_of_elements;
        cin >> number_of_elements;
        int a[number_of_elements];

        for (int i = 0; i < number_of_elements; i++)
            cin >> a[i];

        int k;
        cin >> k;
        Solution ob;
        cout << ob.kthSmallest(a, 0, number_of_elements - 1, k) << endl;
    }
    return 0;
}  // } Driver Code Ends