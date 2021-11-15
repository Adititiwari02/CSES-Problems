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
	ll n, x;
	cin >> n >> x;
	vector<ll> v(n);
	rep(i, 0, n) cin >> v[i];
	map<ll, ll> mp;
	ll cs = 0, ans = 0;
	rep(i, 0, n) {
		cs += v[i];
		if (cs == x) ans++;
		ans += mp[cs - x];
		mp[cs]++;
	}
	cout << ans << endl;
	return 0;
}