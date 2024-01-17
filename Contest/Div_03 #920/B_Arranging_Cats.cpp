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

#define ll long long
void solve() {
    int n;
    string a, b;
    cin >> n >> a >> b;
    int cntA = 0, cntB = 0;
    for (auto &x : a)
        cntA += (x == '1');
    for (auto &x : b)
        cntB += (x == '1');
    int ans = 0;
    if (!cntA) cout << cntB << '\n';
    else if (!cntB) cout << cntA << '\n';
    else if (cntA == cntB) {
        for (int i = 0; i < n; ++i)
            ans += (a[i] != b[i]);
        cout << ans / 2 << '\n';
    }
    else if (cntA < cntB) {
        for (int i = 0; i < n; ++i) {
            if (b[i] == '1') {
                ans += (a[i] != b[i]);
            }
        }
        cout << ans << '\n';
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (a[i] == '1') {
                ans += (a[i] != b[i]);
            }
        }
        cout << ans << '\n';
    }
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