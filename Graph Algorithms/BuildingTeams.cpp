#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

bool oddCycle(vector<vector<ll>>& graph, vector<ll>& color, ll src) {
	queue<ll> q;
	q.push(src);
	ll l = 0;
	color[src] = 1;
	while (q.size()) {
		ll sz = q.size();
		rep(i, 0, sz) {
			ll c = q.front();
			q.pop();
			for (auto u : graph[c]) {
				if (color[u] == color[c]) {
					return false;
				}
				else if (color[u] == -1) {
					color[u] = (color[c] == 1) ? 2 : 1;
					q.push(u);
				}
			}
		}
		l++;
	}
	return true;
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
	vector<vector<ll>> g(n + 1);
	rep(i, 0, m) {
		ll u, v;
		cin >> u >> v;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	vector<ll> color(n + 1, -1);
	rep(i, 1, n + 1) {
		if (color[i] == -1) {
			bool x = oddCycle(g, color, i);
			if (!x) {
				cout << "IMPOSSIBLE" << endl;
				return 0;
			}
		}
	}
	rep(i, 1, n + 1) {
		cout << color[i] << " ";
	}
	return 0;
}