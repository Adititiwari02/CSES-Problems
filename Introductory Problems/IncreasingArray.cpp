#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

void solve() {
	ll n;
	cin >> n;
	vector<ll> v(n);
	rep(i, 0, n) {
		cin >> v[i];
	}
	ll ans = 0;
	rep(i, 1, n) {
		ans += (v[i] < v[i - 1]) ? v[i - 1] - v[i] : 0;
		v[i] += (v[i] < v[i - 1]) ? v[i - 1] - v[i] : 0;
	}
	cout << ans << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}