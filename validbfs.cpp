#include<bits/stdc++.h>
using namespace std;



bool checkvalid(int i, int j, vector<int>& seq, vector<vector<int> >& adj, int n, vector<int>& vis) {
    if (i >= n) return true;
    int sz = adj[seq[i]].size();
    int cnt = 0;
    for (auto a : adj[seq[i]]) {
        if (vis[a] == 0) cnt++;
    }
    sz = cnt;
    map<int, int> mpp;
    int k = j;
    if (sz != 0) {
        for (; k <= j + sz - 1 && k < n; k++) {

            mpp[seq[k]]++;


        }
    }
    if (sz != 0) {
        for (int val : adj[seq[i]]) {
            if (vis[val] == 0) mpp[val]--;

        }
    }
    if (mpp.size() != 0) {
        for (auto m : mpp) {
            if (m.second != 0) {
                return false;
            }
        }
    }
    vis[seq[i]] = 1;
    return checkvalid(i + 1, k, seq, adj, n, vis);
}




int main() {

#ifndef ONLINE_JUDGE

    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    int n;
    cin >> n;

    vector<vector<int> > adj(n + 1, vector<int>());
    for (int i = 0; i < n - 1; i++) {
        int a;
        int b;
        cin >> a;
        cin >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> vis(n + 1, 0);
    vis[1] = 1;
    vector<int> seq;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        seq.push_back(a);
    }
    int ans = seq[0] == 1 && checkvalid(0, 1, seq, adj, n, vis);
    if (ans) cout << "YES";
    else cout << "NO";
    return 0;

}