#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

void dijkstra(ll s, vector<ll> & d, vector<ll> & p) {

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
	vector<vector<pair<ll, ll>>> g(n + 1);
	rep(i, 0, m) {
		ll a, b, c;
		cin >> a >> b >> c;
		g[a].push_back({b, c});
	}
	vector<ll> d(n + 1, LLONG_MAX);
	vector<ll> p(n + 1, -1);
	ll s = 1;
	d[s] = 0;
	set<pair<ll, ll>> q;
	q.insert({0, s});
	while (!q.empty()) {
		ll v = q.begin()->second;
		q.erase(q.begin());
		for (auto edge : g[v]) {
			ll to = edge.first;
			ll len = edge.second;
			if (d[v] + len < d[to]) {
				q.erase({d[to], to});
				d[to] = d[v] + len;
				p[to] = v;
				q.insert({d[to], to});
			}
		}
	}
	rep(i, 1, n + 1) {
		cout << d[i] << " ";
	}
	return 0;
}