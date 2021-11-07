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
	map<ll, ll> mp;
	rep(i, 0, n) {
		ll ele;
		cin >> ele;
		mp[ele] = i;
	}
	ll ans = 0;
	ll curr = 1;
	while (curr <= n) {
		ans++;
		ll prev = mp[curr++];
		while (curr <= n && mp[curr] > prev) {
			prev = mp[curr];
			curr++;
		}
	}
	cout << ans << endl;
	return 0;
}