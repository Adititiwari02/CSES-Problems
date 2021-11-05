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
	ll ans = 0,  n, m, k;
	cin >> n >> m >> k;
	vector<ll> a(n), b(m);
	rep(i, 0, n) {
		cin >> a[i];
	}
	rep(i, 0, m) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	ll i = 0, j = 0;
	while (i < n && j < m) {
		if (abs(a[i] - b[j]) <= k) {
			ans++;
			i++;
			j++;
		}
		else {
			if (a[i] < b[j]) i++;
			else j++;
		}
	}
	cout << ans << endl;
	return 0;
}