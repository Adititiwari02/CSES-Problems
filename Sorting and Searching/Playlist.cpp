#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	vector<ll> v(n);
	rep(i, 0, n) cin >> v[i];
	map<ll, ll> mp;
	ll ans = 0, maxans = 0;
	rep(i, 0, n) {
		ans = (mp[v[i]] == 0 || mp[v[i]] < abs(i - ans)) ? ans + 1 : i + 1 - mp[v[i]];
		mp[v[i]] = i + 1;
		maxans = max(maxans, ans);
	}
	cout << maxans << endl;
	return 0;
}