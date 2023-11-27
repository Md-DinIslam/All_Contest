/* GREEN UNIVERSITY OF BANGLADESH
            Md DinIslam
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int mb, n;
    cin >> mb >> n;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        ans += (mb - x);
    }
    cout << ans + mb << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    // for (int i = 1; i <= t; ++i) {
    //     cout << "Case " << i << ": ";
    //     solve();
    // }
}