/* GREEN UNIVERSITY OF BANGLADESH
            Md DinIslam
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    bool oka = 0, okb = 0;
    if (a == b) okb = 1, oka = 1;
    if (b.substr(0, n) == a) oka = 1;
    if (b.substr(m - n, n) == a) okb = 1;
    if (oka && okb) cout << 0 << '\n';
    else if (oka) cout << 1 << '\n';
    else if (okb) cout << 2 << '\n';
    else cout << 3 << '\n';
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