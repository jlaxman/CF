#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000000 + 7;
#define int long long int
const long long INF = 1e14;


bool check(int i, int j,  vector<vector<int> >& vis) {
    if (i + 1 < 2 && vis[i + 1][j] == 0) {
        return 1;
    }
    int n = vis[0].size();
    if (j + 1 < n && vis[i][j + 1] == 0) {
        return 1;
    }
    if (j - 1 >= 0 && vis[i][j - 1] == 0) {
        return 1;
    }
    if (i - 1 >= 0 && vis[i - 1][j] == 0) {
        return 1;
    }
    return 0;

}



bool solve() {

    int n; cin >> n;

    int a[2][n];
    for (int i = 0; i < n; i++) {
        cin >> a[0][i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a[1][i];
    }

    int start = 0;
    int i = 0;
    int j = 0;
    vector<vector<int> > vis(2, vector<int>(n, 0));
    vis[0][0] = 1;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    while (check(i, j, vis)) {
        int nxi = 0;
        int nxj = 0;
        int mini = INT_MAX;
        for (int k = 0; k < 4; k++) {
            int x = i + dx[k];
            int y = j + dy[k];
            if (x >= 0 && x < 2 && y >= 0 && y < n && vis[x][y] == 0) {
                if (a[x][y] < mini) {
                    mini = a[x][y];
                    nxi = x;
                    nxj = y;
                }
            }

        }
        int f = mini - start;
        start += (max(0LL, f) + 1);
        i = nxi;
        j = nxj;
        vis[i][j] = 1;
    }
    cout << start << endl;



    return 1;
}



int32_t main() {

#ifndef ONLINE_JUDGE

    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif




    int q = 1;
    cin >> q;

    while (q--) {

        if (solve()) {
            // cout << "YES" << endl;
        } else {
            // cout << "NO" << endl;
        }



    }

    return 0;

}