#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

void helper(vector<ll> v, vector<ll> subset, vector<vector<ll>>& res, ll idx, ll n) {
	res.push_back(subset);
	rep(i, idx, n) {
		subset.push_back(v[i]);
		helper(v, subset, res, i + 1, n);
		subset.pop_back();
	}
}

vector<vector<ll>> getAllSubsets(vector<ll> v, int n) {
	vector<vector<ll>> res;
	vector<ll> subset;
	helper(v, subset, res, 0, n);
	return res;
}

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
	ll sum = 0;
	rep(i, 0, n) {
		cin >> v[i];
		sum += v[i];
	}
	vector<vector<ll>> subsets = getAllSubsets(v, n);
	ll sz = subsets.size();
	ll ans = INT_MAX;
	rep(i, 0, sz) {
		ll s = 0;
		rep(j, 0, subsets[i].size()) {
			s += subsets[i][j];
		}
		ans = min(ans, abs((sum - s) - s));		// s = sum of one group, (sum - s) = sum of other group
	}
	cout << ans << endl;
	return 0;
}