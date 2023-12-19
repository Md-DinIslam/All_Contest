/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
// using int = long long;
#define ll long long
void solve() {
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    ll ans = 0, sum = 0;
    int mxV = 0;
    for (int i = 0; i < n && i < k; ++i) {
        sum += a[i];
        mxV = max(mxV, b[i]);
        ans = max(ans, sum + 1ll * mxV * (k - i - 1));
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