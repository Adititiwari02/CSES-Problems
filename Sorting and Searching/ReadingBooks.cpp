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
	ll n;
	cin >> n;
	vector<ll> v(n);
	rep(i, 0, n) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ll s = 0;
	rep(i, 0, n - 1) {
		s += v[i];
	}
	if (s <= v[n - 1]) {
		cout << v[n - 1] * 2 << endl;
	} else cout << s + v[n - 1] << endl;
	return 0;
}