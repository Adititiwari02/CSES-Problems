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
	set<ll> s;
	rep(i, 0, n) {
		s.insert(i + 1);
	}
	auto it = s.begin();
	while (s.size() > 0) {
		it++;
		if (it != s.end()) {
			cout << *it << " ";
		} else {
			it = s.begin();
			cout << *it << " ";
		}
		auto prev = it;
		if (s.size() <= 1) break;
		it++;
		if (it == s.end()) it = s.begin();
		s.erase(prev);
	}
	return 0;
}