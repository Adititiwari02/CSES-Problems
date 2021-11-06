#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)
bool cmp(pair<ll, ll> & a, pair<ll, ll>& b) {
	return (a.second <= b.second);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	vector<pair<ll, ll>> v;
	rep(i, 0, n) {
		ll s, e;
		cin >> s >> e;
		v.push_back({e, s});
	}
	sort(v.begin(), v.end());
	ll ans = 0, ce = -1;
	rep(i, 0, n) {
		if (v[i].second >= ce) {
			ans++;
			ce = v[i].first;
		}
	}
	cout << ans << endl;
	return 0;
}