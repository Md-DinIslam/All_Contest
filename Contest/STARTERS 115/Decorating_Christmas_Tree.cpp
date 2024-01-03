/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    y = y / 3;
    if (y <= x) {
        ll b = x - y;
        ll c = b / 2;
        cout << (y + c >= n ? "YES\n" : "NO\n");
    }
    else {
        if (x < n) cout << "NO\n";
        else cout << "YES\n";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { //Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}