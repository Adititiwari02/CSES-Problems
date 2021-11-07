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
	vector<ll> v(n);
	rep(i, 0, n) cin >> v[i];
	sort(v.begin(), v.end());
	ll req = 1, pres = 0;
	rep(i, 0, n) {
		if (v[i] > req) {
			break;
		} else {
			req = v[i] + pres + 1;
			pres = v[i] + pres;
		}
	}
	cout << req << endl;
	return 0;
}