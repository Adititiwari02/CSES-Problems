#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

vector<ll> adj[100005];
bool vis[100005];
vector<ll> cyc;
bool dfs(int s, int p) {
    vis[s] = 1;
    for (auto i : adj[s]) {
        cyc.push_back(i);
        if (!vis[i]) {if (dfs(i, s)) return 1;}
        else if (i != p) {return 1;}
        cyc.pop_back();
    }
    return 0;
}
void solve() {
    ll n, m;
    cin >> n >> m;
    rep(i, 0, m) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v), adj[v].push_back(u);
    }
    rep(i, 1, n + 1) {
        cyc.push_back(i);
        if (!vis[i] && dfs(i, 0)) {
            vector<ll> ans = {*cyc.rbegin()};
            for (auto j = cyc.rbegin() + 1; j != cyc.rend(); j++) {
                ans.push_back(*j);
                if (*j == *cyc.rbegin()) break;
            }
            cout << ans.size() << endl;
            for (auto i : ans)  cout << i << " ";
            return;
        }
        cyc.pop_back();
    }
    cout << "IMPOSSIBLE" << endl;

}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}