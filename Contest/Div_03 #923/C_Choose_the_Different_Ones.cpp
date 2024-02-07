/* GREEN UNIVERSITY OF BANGLADESH
    Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;

// Debug..
#ifdef LOCAL
#include "debug.h"
#endif

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
const int mxN = 1e6 + 10;
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    set<int> a, b;
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        if (x <= k ) {
            a.insert(x);
        }
    }
    for (int i = 0, x; i < m; ++i) {
        cin >> x;
        if (x <= k ) {
            b.insert(x);
        }
    }
    int fn = a.size(), sn = b.size();
    for (auto &x : b)
        a.insert(x);
    int tot = a.size();
    if (tot >= k && fn >= k / 2 && sn >= k / 2) cout << "YES\n";
    else cout << "NO\n";
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