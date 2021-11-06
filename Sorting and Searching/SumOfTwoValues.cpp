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
	ll n, x;
	cin >> n >> x;
	vector<pair<ll, ll>> vp;
	rep(i, 0, n) {
		ll ele;
		cin >> ele;
		vp.push_back({ele, i + 1});
	}
	sort(vp.begin(), vp.end());
	ll l = 0, r = n - 1;
	while (l < r) {
		if (vp[l].first + vp[r].first == x) {
			cout << vp[l].second << " " << vp[r].second << endl;
			return 0;
		} else if (vp[l].first + vp[r].first < x) {
			l++;
		} else {
			r--;
		}
	}
	cout << "IMPOSSIBLE" << endl;
	return 0;
}