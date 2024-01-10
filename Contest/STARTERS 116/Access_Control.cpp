/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    if (s[0] == '0') cout << "NO\n";
    else {
        int cnt = 0, ok = 1;
        for (auto &x : s) {
            if (x == '0') cnt++;
            else cnt = 0;
            if (cnt > k) ok = 0;
        }
        cout << (!ok ? "NO" : "YES") << '\n';
    }
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