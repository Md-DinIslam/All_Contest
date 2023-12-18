/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
int cnt[30];
void solve() {
    int tp;
    cin >> tp;
    if (tp == 1) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    else {
        int val;
        cin >> val;
        for (int i = 29; i >= 0; --i) {
            int temp = min(cnt[i], val >> i);
            val -= (temp << i);
        }
        cout << (val == 0 ? "YES\n" : "NO\n");
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