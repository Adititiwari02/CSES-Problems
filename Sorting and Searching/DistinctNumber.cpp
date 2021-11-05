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
	map<int, int> mp;
	ll cnt = 0;
	rep(i, 0, n) {
		cin >> v[i];
		if (mp[v[i]] == 0) {
			mp[v[i]]++;
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}