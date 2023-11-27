/* GREEN UNIVERSITY OF BANGLADESH
            Md DinIslam
*/
#include <bits/stdc++.h>
using namespace std;
bool isLikeNum(int i) {
    return ((i / 100) * (i / 10 % 10) == (i % 10));
}
void solve() {
    int n;
    cin >> n;
    for (int i = n; i < 920; ++i) {
        if (isLikeNum(i)) {
            cout << i << '\n';
            return;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
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