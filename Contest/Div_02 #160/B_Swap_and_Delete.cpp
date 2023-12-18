/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int n = s.size(), c0 = 0, c1 = 0;
    for (auto &x : s) {
        if (x == '0') c0++;
        else c1++;
    }
    int ans = 0, t0 = 0, t1 = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') t1++;
        else t0++;
        if (t1 <= c1 && t0 <= c0) ans = i + 1;
    }
    cout << n - ans << "\n";
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