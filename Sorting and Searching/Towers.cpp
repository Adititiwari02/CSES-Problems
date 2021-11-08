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
	rep(i, 0, n) {
		cin >> v[i];
	}
	multiset<ll> st;
	st.insert(v[n - 1]);
	ll ans = 1;
	for (ll i = n - 2; i >= 0; i--) {
		auto it = st.lower_bound(v[i]);
		if (it == st.begin()) {
			st.insert(v[i]);
		} else {
			it--;
			st.erase(it);
			st.insert(v[i]);
		}
		ans = max(ans, ll(st.size()));

	}
	cout << ans << endl;

	return 0;
}