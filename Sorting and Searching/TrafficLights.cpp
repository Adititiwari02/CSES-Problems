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
	ll x, n;
	cin >> x >> n;
	set<ll> lights;
	multiset<ll> dist;
	lights.insert(0);
	lights.insert(x);
	dist.insert(x);
	rep(i, 0, n) {
		ll ele;
		cin >> ele;
		auto it1 = lights.upper_bound(ele), it2 = it1;
		it2--;
		dist.erase(dist.find(*it1 - *it2));
		dist.insert(*it1 - ele);
		dist.insert(ele - *it2);
		lights.insert(ele);
		auto ans = dist.end();
		ans--;
		cout << *ans << " ";
	}
	return 0;
}