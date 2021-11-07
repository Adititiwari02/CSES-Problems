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
	sort(v.begin(), v.end());
	ll ele = v[n / 2];
	ll ans = 0;
	rep(i, 0, n) {
		ans += abs(ele - v[i]);
	}
	cout << ans << endl;
	return 0;
}