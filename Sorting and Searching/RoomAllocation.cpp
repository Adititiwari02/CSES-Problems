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
	vector<pair<pair<ll, ll>, ll>> v;
	rep(i, 0, n) {
		ll a, b;
		cin >> a >> b;
		v.push_back({{a, b}, i});
	}
	sort(v.begin(), v.end());
	vector<ll> ans(n);
	ans[v[0].second] = 1;
	priority_queue<pair<ll, ll>> pq;
	pq.push({ -1 * v[0].first.second, 1});
	ll noRooms = 1;
	rep(i, 1, n) {
		if (pq.top().first * -1 < v[i].first.first) {
			ans[v[i].second] = pq.top().second;
			pq.pop();
			pq.push({ -1 * v[i].first.second, ans[v[i].second]});
		} else {
			ans[v[i].second] = pq.size() + 1;
			pq.push({ -1 * v[i].first.second, ans[v[i].second]});
		}
		noRooms = max(noRooms, ans[v[i].second]);
	}
	cout << noRooms << endl;
	rep(i, 0, n) {
		cout << ans[i] << " ";
	}
	return 0;
}