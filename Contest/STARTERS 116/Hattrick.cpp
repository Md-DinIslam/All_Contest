/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n = 6;
    string s;
    for (int i = 0; i < n; ++i) {
        char x;
        cin >> x;
        s.push_back(x);
    }
    int ok = 0, cnt = 0;
    for (auto &x : s) {
        if (x == 'W') cnt++;
        else cnt = 0;
        if (cnt >= 3) ok = 1;
        // cout << cnt << " ";
    }
    cout << (ok ? "YES" : "NO") << '\n';
}
int main() {
    ios_base :: sync_with_stdio(0);
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