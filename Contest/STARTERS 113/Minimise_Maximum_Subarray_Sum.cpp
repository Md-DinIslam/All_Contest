/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int x, y;
    cin >> x >> y;
    if (x <= y) {
        cout << "1\n";
    }
    else {
        int ans = ceil(x / (y + 1.0)), b = (x - 2 * y);
        cout << (max(ans, b)) << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    cin >> t;
    while (t--) solve();
    // fl(i, t) { //Kickstart
    //     cout << "Case #" << i + 1 << ": "; solve();
    // }
    return 0;
}