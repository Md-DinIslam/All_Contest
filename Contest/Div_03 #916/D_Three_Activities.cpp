/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
void solve() {
    int n;
    cin >> n;
    vector<pair<ll, int>> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i].ff, a[i].ss = i;
    for (int i = 0; i < n; ++i)
        cin >> b[i].ff, b[i].ss = i;
    for (int i = 0; i < n; ++i)
        cin >> c[i].ff, c[i].ss = i;
    sort(begin(a), end(a), greater<pair<ll, int>>());
    sort(begin(b), end(b), greater<pair<ll, int>>());
    sort(begin(c), end(c), greater<pair<ll, int>>());
    vector<pair<ll, int>> x(3), y(3), z(3);
    ll ans = 0;
    for (int i = 0; i < 3; ++i) {
        x[i].ff = a[i].ff, y[i].ff = b[i].ff, z[i].ff = c[i].ff;
        x[i].ss = a[i].ss, y[i].ss = b[i].ss, z[i].ss = c[i].ss;
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (x[i].ss != y[j].ss && y[j].ss != z[k].ss && x[i].ss != z[k].ss) {
                    ans = max(ans, x[i].ff + y[j].ff + z[k].ff);
                }
            }
        }
    }
    cout << ans << '\n';
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