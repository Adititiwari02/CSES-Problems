#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

void dfs(vector<vector<ll>>& graph, vector<ll>& vis, ll src) {
	vis[src] = true;
	for (auto x : graph[src]) {
		if (!vis[x]) {
			dfs(graph, vis, x);
		}
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
	vector<ll> vis(n + 1, false);
	vector<ll> ans;
	rep(i, 1, n + 1) {
		if (!vis[i]) {
			dfs(graph, vis, i);
			ans.push_back(i);
		}
	}
	cout << ans.size() - 1 << endl;
	rep(i, 0, ans.size() - 1) {
		cout << ans[i] << " " << ans[i + 1] << endl;
	}
	return 0;
}