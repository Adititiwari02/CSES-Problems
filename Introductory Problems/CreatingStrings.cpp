#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

set<string> ans;
void permute(string a, int l, int r) {
	if (l == r)
		ans.insert(a);
	else {
		for (int i = l; i <= r; i++) {
			swap(a[l], a[i]);
			permute(a, l + 1, r);
			swap(a[l], a[i]);
		}
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	cin >> str;
	int n = str.size();
	permute(str, 0, n - 1);
	cout << ans.size() << endl;
	for (auto x : ans) {
		cout << x << endl;
	}
	return 0;
}