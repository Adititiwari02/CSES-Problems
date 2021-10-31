#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

void solve() {
	string s;
	cin >> s;
	ll n = s.size(), i = 0, ans = 0;
	while (i < n) {
		ll j = i, currLen = 0;
		while (j < n && s[i] == s[j])
			j++, currLen++;
		ans = max(ans, currLen);
		i = j;
	}
	cout << ans << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}