/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;

// Debug..
#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif
#define arr array
#define ll long long
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), v(m);
    for (auto &x : a)
        cin >> x;
    for (int i = 0; i < m; ++i) {
        cin >> v[i];
    }
    sort(begin(a), end(a));
    sort(begin(v), end(v));
    ll ans = 0;
    int j = 0;
    for (int i = 0; i < n; ++i) {
        ll x = abs(*v.begin() - a.back());
        ll y = abs(*v.begin() - *a.begin());
        ll p  = abs(v.back() - *a.begin());
        ll q = abs(v.back() - a.back());
        if (x > y && x > p && x > q) {
            ans += x;
            v.erase(v.begin());
            a.pop_back();
        }
        else if (y > p && y > q) {
            ans += y;
            v.erase(v.begin());
            a.erase(a.begin());
        }
        else if (p > q) {
            ans += p;
            v.pop_back();
            a.erase(a.begin());
        }
        else {
            ans += q;
            v.pop_back();
            a.pop_back();
        }
    }
    // __print(v);
    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}