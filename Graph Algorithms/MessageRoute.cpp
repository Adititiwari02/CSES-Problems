#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

void bfs(vector<vector<ll>>& g, ll req) {
	queue <ll> q;
	vector<int> d(req + 1, 0), p(req + 1, 0);
	vector<ll> vis(req + 1, false);
	q.push(1);
	vis[1] = true;
	p[1] = -1;
	while (q.size()) {
		ll sz = q.size();
		rep(i, 0, sz) {
			ll c = q.front();
			q.pop();
			for (ll x : g[c]) {
				if (!vis[x]) {
					q.push(x);
					vis[x] = true;
					d[x] = d[c] + 1;
					p[x] = c;
				}
			}
		}
	}
	if (!vis[req]) {
		cout << "IMPOSSIBLE";
	} else {
		vector<int> path;
		for (int v = req; v != -1; v = p[v])
			path.push_back(v);
		reverse(path.begin(), path.end());
		cout << path.size() << endl;
		for (int v : path)
			cout << v << " ";
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, m;
	cin >> n >> m;
	vector<vector<ll>> graph(n + 1);
	rep(i, 0, m) {
		ll u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	bfs(graph, n);
	return 0;
}