#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

vector<vector<int>> res;
ll step = 0;
void towerOfHanoi(int n, int src, int mid, int dest) {
	if (n == 0) return;
	towerOfHanoi(n - 1, src, dest, mid);
	res.push_back({src, dest});
	step++;
	towerOfHanoi(n - 1, mid, src, dest);
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
	towerOfHanoi(n, 1, 2, 3);
	cout << step << endl;
	rep(i, 0, step) {
		cout << res[i][0] << " " << res[i][1] << endl;
	}
	return 0;
}