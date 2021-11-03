#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

vector<string> helper(int n) {
	if (n == 0) {
		vector<string> a;
		a.push_back("");
		return a;
	}
	vector<string> a = helper(n - 1);
	vector<string> ans;
	for (int i = 0; i < a.size(); i++) {
		ans.push_back("0" + a[i]);
	}
	for (int i = a.size() - 1; i >= 0; i--) {
		ans.push_back("1" + a[i]);
	}
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<string> ans = helper(n);
	for (auto x : ans) {
		cout << x << endl;
	}
	return 0;
}