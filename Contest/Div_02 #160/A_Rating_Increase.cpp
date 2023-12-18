/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int n = s.size(), a = -1, b = -1;
    for (int i = 1; i < n; ++i) {
        if (s[0] == '0' || s[i] == '0') continue;
        int x = 0, y = 0;
        for (int j = 0; j < i; ++j) x = x * 10 + (s[j] - '0');
        for (int j = i; j < n; ++j) y = y * 10 + (s[j] - '0');
        if (x < y) a = x, b = y;
    }
    if (a == -1) cout << "-1\n";
    else cout << a << ' ' << b << '\n';

    // string s;
    // cin >> s;
    // int ok = 0;
    // for (int i = 1; i < (int) s.size(); ++i) {
    //     string a = s.substr(0, i);
    //     string b = s.substr(i);
    //     if (b[0] == '0') continue;
    //     if (a.size() < b.size() || (a.size() == b.size() && a < b)) {
    //         cout << a << " " << b << '\n';
    //         ok = 1;
    //     }
    // }
    // if (!ok) cout << "-1\n";
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