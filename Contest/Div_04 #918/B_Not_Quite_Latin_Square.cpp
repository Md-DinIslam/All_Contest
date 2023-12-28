/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s[3];
    for (int i = 0; i < 3; ++i)
        cin >> s[i];
    int cntA = 0, cntB = 0, cntC = 0;
    for (int i = 0; i < 3; ++i) {
        for (auto &x : s[i]) {
            cntA += (x == 'A');
            cntB += (x == 'B');
            cntC += (x == 'C');
        }
    }
    if (cntA % 2 == 0) cout << "A\n";
    else cout << (cntB % 2 == 0 ? "B\n" : "C\n");
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