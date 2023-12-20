/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    bool ok = 0;
    if (n > 4) sort(v, v + n);
    for (int i = 0; i + 3 < n; ++i) {
        ll a = v[i] + v[i + 1], b = v[i + 2] + v[i + 3];
        if (a != b) {
            ok = 1;
            break;
        }
    }
    if (ok) cout << "YES\n";
    else cout << "NO\n";
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