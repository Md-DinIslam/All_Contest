/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, m;
    cin >> n >> m;
    int mxV = INT_MIN, mnV = INT_MAX;
    int v[n];
    for (auto &x : v) {
        cin >> x;
        mxV = max(x, mxV);
        mnV = min(x, mnV);
    }
    ll sum = 0;
    for (auto &x : v) {
        sum += mxV - x;
    }
    int ans = max(mxV - mnV, static_cast<int>((sum + m - 1) / m));
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