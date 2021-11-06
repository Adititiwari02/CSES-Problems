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
	vector<pair<ll, ll>> v;
	rep(i, 0, n) {
		ll arrive, depart;
		cin >> arrive >> depart;
		v.push_back({arrive, 1});
		v.push_back({depart, -1});
	}
	sort(v.begin(), v.end());
	ll ans = 0, s = 0;
	rep(i, 0, 2 * n) {
		s += v[i].second;
		ans = max(ans, s);
	}
	cout << ans << endl;
	return 0;
}