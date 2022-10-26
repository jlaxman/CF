#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000000 + 7;
#define int long long int
const long long INF = 1e14;



class Graph {
	int N;
	list<int> *l;
public:
	Graph(int v) {
		N = v;
		l = new list<int> [v];
	}
	void addEdge(int i, int j, bool undir = true) {
		l[i].push_back(j);
		if (undir == true) {
			l[j].push_back(i);
		}
	}
	void printgraph() {
		for (int i = 0; i < N; i++) {
			cout << i << "-->";
			for (int node : l[i]) {
				cout << node << ", ";
			}
			cout << endl;
		}

	}
	void bfs(int s) {
		queue<int> q;
		cout << s << endl;
		q.push(s);

		vector<int> visited(N, 1e9);
		visited[s] = 0;

		while (!q.empty()) {
			int curr = q.front();
			q.pop();

			for (int nbr : l[curr]) {
				if (visited[nbr] == 1e9) {
					// cout << nbr << endl;
					visited[nbr] = visited[curr] + 1;
					cout << nbr << " " << visited[nbr] << endl;
					q.push(nbr);
				}
			}
		}

	}
	void dfshelper(int source, bool* visited) {


		for (auto nbr : l[source]) {
			if (visited[nbr] == false) {
				visited[nbr] = true;
				cout << nbr << ',';
				dfshelper(nbr, visited);
			}
		}
	}

	void dfs(int source) {
		bool* visited = new bool [N];
		for (int i = 0; i < N; i++) visited[i] = false;
		visited[source] = 1;
		cout << source << ',';
		dfshelper(source, visited);
	}


	bool containscycle(int s, bool* visited, int parent) {
		visited[s] = 1;
		for (auto nbr : l[s]) {
			if (visited[nbr] == false) {

				if (containscycle(nbr, visited, s) == true) return true;
			}
			else if (nbr != parent) {
				return true;
			}
		}
		return false;
	}


};

int32_t main() {

#ifndef ONLINE_JUDGE

	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif



	Graph g(7);
	g.addEdge(0, 1);
	g.addEdge(2, 1);
	g.addEdge(3, 2);
	g.addEdge(3, 6);
	g.addEdge(4, 3);
	g.addEdge(4, 5);
	g.addEdge(5, 0);
	// g.printgraph();

	g.dfs(0);







	return 0;

}




















