#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

void solve() {
    ll k;
    cin >> k;
    cout << 0 << endl;
    ll n = 2;
    while (n <= k) {
        ll total = ((n * n) * (n * n - 1)) / 2, notPossible = 4 * (n - 1) * (n - 2);
        cout << total - notPossible << endl;
        n++;
    }
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