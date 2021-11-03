#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

void solve() {
	ll n, m;
	cin >> n >> m;
	ll x = -1, y = -1;
	if ((2 * n - m) % 3 == 0) {
		x = (2 * n - m) / 3;
	}
	if ((2 * m - n) % 3 == 0) {
		y = (2 * m - n) / 3;
	}
	x >= 0 && y >= 0 ? cout << "YES" << endl : cout << "NO" << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}