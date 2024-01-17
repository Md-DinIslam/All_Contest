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
    arr<int, 2> v[4];
    for (int i = 0; i < 4; ++i) {
        cin >> v[i][0] >> v[i][1];
    }
    sort(v, v + 4);
    ll a = v[0][1] - v[1][1];
    cout << (1ll * a * a) << '\n';
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