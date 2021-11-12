#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (ll i = a; i < b; i++)

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, m, q;
	cin >> n >> m >> q;
	ll x = 1e9 * (n + 1);
	vector<vector<ll>> g(n + 1, vector<ll>(n + 1, x)), d(n + 1, vector<ll> (n + 1, x));
	rep(i, 0, m) {
		ll a, b, c;
		cin >> a >> b >> c;
		d[a][b] = min(c, d[a][b]);
		d[b][a] = min(c, d[b][a]);
	}
	rep(i, 1, n + 1) {
		d[i][i] = 0;
	}
	rep(k, 1, n + 1) {
		rep(i, 1, n + 1) {
			rep(j, 1, n + 1) {
				if (d[i][k] < x && d[k][j] < x)
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	rep(k, 0, q) {
		ll i, j;
		cin >> i >> j;
		(d[i][j] != x) ? cout << d[i][j] << endl : cout << -1 << endl;
	}
	return 0;
}