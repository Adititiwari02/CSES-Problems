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
	ll n, m;
	cin >> n >> m;
	// balanced BST - set
	multiset<ll> h;
	vector<ll> t(m);
	rep(i, 0, n) {
		ll ele;
		cin >> ele;
		h.insert(ele);
	}
	rep(i, 0, m) {
		cin >> t[i];
	}
	for (ll x : t) {
		if (h.size() == 0) {
			cout << -1 << " ";
			continue;
		}
		auto it = h.lower_bound(x);
		if (it == h.end()) {
			it--;
		}
		if (*it == x) {
			cout << *it << " ";
			h.erase(it);
		}
		else if (it == h.begin() && *it > x) {
			cout << -1 << " ";
		}
		else if (it == h.begin() && *it <= x) {
			cout << *it << " ";
			h.erase(it);
		}
		else if (it != h.begin()) {
			it--;
			cout << *it << " ";
			h.erase(it);
		}
	}

	return 0;
}