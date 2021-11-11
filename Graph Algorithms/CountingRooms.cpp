#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

void dfs(vector<string>& graph, vector<vector<bool>>& vis, ll r, ll c, ll n, ll m) {
	vis[r][c] = true;
	vector<vector<int>> dir = {{0, -1}, {0, 1}, { -1, 0}, {1, 0}};
	for (auto x : dir) {
		ll nr = r + x[0], nc = c + x[1];
		if (nr < n && nc < m && nr >= 0 && nc >= 0 && graph[nr][nc] == '.' && !vis[nr][nc]) {
			dfs(graph, vis, nr, nc, n, m);
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
	vector<string> graph;
	rep(i, 0, n) {
		string row;
		cin >> row;
		graph.push_back(row);
	}
	ll ans = 0;
	vector<vector<bool>> vis(n, vector<bool>(m, false));
	rep(i, 0, n)
	rep(j, 0, m) {
		if (graph[i][j] == '.' && !vis[i][j]) {
			ans++;
			dfs(graph, vis, i, j, n, m);
		}
	}
	cout << ans << endl;
	return 0;
}