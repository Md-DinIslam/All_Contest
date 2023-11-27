/* GREEN UNIVERSITY OF BANGLADESH
            Md DinIslam
*/
#include <bits/stdc++.h>
using namespace std;
string s;
bool isPalin(string &s) {
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        if (s[i] != s[n - i - 1]) return 0;
    }
    return 1;
}
void solve() {
    cin >> s;
    int n = s.size(), ans = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j <= n; j++) {
            // string substr = s.substr(i, j);
            string substr = "";
            for(int t = i;t < j; ++t) substr += s[t];
            if (isPalin(substr)) {
                ans = max(ans, j - i);
            }
        }
    }
    cout << ans << '\n';

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