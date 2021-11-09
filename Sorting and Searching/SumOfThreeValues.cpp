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
	vector<pair<ll, ll>> v;
	rep(i, 0, n) {
		ll ele;
		cin >> ele;
		v.push_back({ele, i + 1});
	}
	sort(v.begin(), v.end());
	ll i = 0;
	while (i < n - 2) {
		ll req = x - v[i].first, prev = v[i].first;
		ll j = i + 1, k = n - 1;
		while (j < k) {
			if (v[j].first + v[k].first == req) {
				cout << v[i].second << " " << v[j].second << " " << v[k].second << endl;
				return 0;
			} else if (v[j].first + v[k].first < req) j++;
			else k--;
		}
		while (i < n && v[i].first == prev) i++;
	}
	cout << "IMPOSSIBLE" << endl;
	return 0;
}