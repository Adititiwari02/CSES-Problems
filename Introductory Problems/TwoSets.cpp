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
    ll sum = (n * (n + 1)) / 2;
    if (sum % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        ll reqSum = sum / 2;
        vector<ll> v1, v2;
        while (n) {
            if (reqSum - n >= 0) {
                v1.push_back(n);
                reqSum -= n;
            } else {
                v2.push_back(n);
            }
            n--;
        }
        cout << v1.size() << endl;
        for (ll i = 0; i < v1.size(); i++) {
            cout << v1[i] << " ";
        }
        cout << endl;
        cout << v2.size() << endl;
        for (ll i = 0; i < v2.size(); i++) {
            cout << v2[i] << " ";
        }
        cout << endl;
    }
    return 0;
}