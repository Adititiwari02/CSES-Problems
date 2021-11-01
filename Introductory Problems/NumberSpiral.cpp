#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
const ll mod = 1e9 + 7;
#define rep(i,a,b) for (int i = a; i < b; i++)

// not indexing is 1 based according to this question

void solve() {
    ll x, y;
    cin >> x >> y;
    if (x % 2) {
        if (x >= y) {
            cout << (x - 1)*(x - 1) + y << endl;
        } else {
            (y % 2) ? cout << y*y - (x - 1) << endl : cout << (y - 1)*(y - 1) + x << endl;
        }
    } else {
        if (x >= y) {
            cout << x*x - (y - 1) << endl;
        } else {
            (y % 2) ? cout << y*y - (x - 1) << endl : cout << (y - 1)*(y - 1) + x << endl;
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
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
