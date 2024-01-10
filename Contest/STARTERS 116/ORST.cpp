/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int mxV = 0;
    for (int i = 0, x; i < m; ++i) {
        cin >> x;
        mxV = max(x, mxV);
    }
    sort(a + n - mxV, a + n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " \n"[i == n - 1];
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