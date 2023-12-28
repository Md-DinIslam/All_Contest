/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    string s;
    cin >> n >> s;
    int m = n / 2, j = 0;
    m -= (n % 2 == 0);
    // cout << m << "\n";
    while (m > 0 && j < n) {
        cout << 'P';
        if (s[j] != 'R')
            --m;
        ++j;
    }
    while (j < n) {
        if (s[j] == 'R') cout << "P";
        else {
            cout << (s[j] == 'P' ? "S" : "R");
        }
        ++j;
    }
    cout << '\n';
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