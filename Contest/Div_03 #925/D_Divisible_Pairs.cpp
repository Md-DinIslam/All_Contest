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
#define arr array
void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    map<arr<int, 2>, int> cnt;
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        int tempX = val % x;
        int tempY = val % y;
        arr<int, 2> pr = {(x - tempX) % x, (y + tempY) % y};
        if (cnt[pr] != 0)
            ans += cnt[pr];
        cnt[ {tempX, tempY}]++;
    }
    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}