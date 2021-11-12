#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (ll i = a; i < b; i++)

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, m;
	cin >> n >> m;
	vector<vector<ll>> graph(n + 1);
	rep(i, 0, m) {
		ll a, b;
		cin >> a >> b;
		graph[a].push_back(b);
	}
	vector<ll> inDegree(n + 1, 0);
	rep(i, 1, n + 1) {
		for (auto nbr : graph[i]) {
			inDegree[nbr]++;
		}
	}
	queue<ll> qInDegZero;
	rep(i, 1, n + 1) {
		if (inDegree[i] == 0) qInDegZero.push(i);
	}
	ll topoSortSize = 0;
	vector<ll> topoSort;
	while (qInDegZero.size()) {
		ll vertex = qInDegZero.front();
		qInDegZero.pop();
		topoSortSize++;
		topoSort.push_back(vertex);
		for (auto nbr : graph[vertex]) {
			inDegree[nbr]--;
			if (inDegree[nbr] == 0) qInDegZero.push(nbr);
		}
	}
	if (topoSortSize == n) {
		rep(i, 0, n) {
			cout << topoSort[i] << " ";
		}
	} else cout << "IMPOSSIBLE" << endl;
	return 0;
}