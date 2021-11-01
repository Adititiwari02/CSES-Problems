#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

void solve() {
	ll n;
	cin >> n;
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION" << endl;
		return;
	}
	vector<ll> ans(n); 	// permutation will be like: [... 5 3 1 n 2 4 6...]
	ll midPos = n / 2;
	ans[midPos] = n;
	ll ele = 1, pos = midPos - 1;  // filling odd elements to left of midPos
	while (pos >= 0) {
		ans[pos--] = ele;
		ele += 2;
	}
	ele = 2;
	pos = midPos + 1;		// filling even elements to the right of midpos
	while (pos < n) {
		ans[pos++]  = ele;
		ele += 2;
	}
	rep(i, 0, n) {
		cout << ans[i] << " ";
	}
	cout << endl;
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