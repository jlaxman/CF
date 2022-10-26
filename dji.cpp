#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000000 + 7;
#define ll long long
const long long INF = 1e14;
#define pll pair<ll, ll>

vector<ll> dijkstra(const vector<vector<pll> >& graph, int n, int src) {
	vector<ll> dist(n + 1, LONG_MAX);
	vector<ll> ways(n + 1);
	ways[src] = 1;
	dist[src] = 0;
	priority_queue<pll, vector<pll>, greater<pll> > minHeap;
	minHeap.push(make_pair(0, src)); // dist, src
	while (!minHeap.empty()) {
		ll d, u;
		d = minHeap.top().first;
		u = minHeap.top().second;
		minHeap.pop();
		if (d > dist[u]) continue; // Skip if `d` is not updated to latest version!
		for (auto p : graph[u]) {
			ll v = p.first;
			ll time = p.second;
			if (dist[v] > d + time) {
				dist[v] = d + time;
				ways[v] = ways[u];
				minHeap.push(make_pair(dist[v], v));
			} else if (dist[v] == d + time) {
				ways[v] = (ways[v] + ways[u]) % MOD;
			}
		}
	}
	return ways;
}

vector<ll> dijkstra1(const vector<vector<pll> >& graph, int n, int src) {
	vector<ll> dist(n + 1, LONG_MAX);
	vector<ll> ways(n + 1);
	ways[src] = 1;
	dist[src] = 0;
	priority_queue<pll, vector<pll>, greater<pll> > minHeap;
	minHeap.push(make_pair(0, src)); // dist, src
	while (!minHeap.empty()) {
		ll d, u;
		d = minHeap.top().first;
		u = minHeap.top().second;
		minHeap.pop();
		if (d > dist[u]) continue; // Skip if `d` is not updated to latest version!
		for (auto p : graph[u]) {
			ll v = p.first;
			ll time = p.second;
			if (dist[v] == d + time || dist[v] == d + time + 1) {
				ways[v] = (ways[v] + ways[u]) % MOD;
			} else if (dist[v] > d + time) {
				dist[v] = d + time;
				ways[v] = ways[u];
				minHeap.push(make_pair(dist[v], v));
			}
		}
	}
	return ways;
}

int main() {
#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int t, n, m, s;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cin >> s >> t;
		vector<vector<pll> > graph(n + 1);
		vector<ll> ans;
		for (ll i = 0; i < m; i++) {
			ll u , v, time = 1LL;
			cin >> u >> v;
			graph[u].push_back(make_pair(v, time));
			graph[v].push_back(make_pair(u, time));
		}
		ans = dijkstra(graph, n, s);
		// cout << ans[t] << endl;
		vector<ll> ans2 = dijkstra1(graph, n, s);
		cout << ans2[t] << endl;



	}






	return 0;

}



















