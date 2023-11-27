/* GREEN UNIVERSITY OF BANGLADESH
            Md DinIslam
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    double n;
    cin >> n;
    double ans = n * 0.09144;
    cout << fixed << setprecision(15) << ans;

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