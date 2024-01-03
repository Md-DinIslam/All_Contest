/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
void solve() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    sort(a, a + n, greater<int>());
    sort(b, b + n);
    bool ok = 1;
    int sum = a[0] + b[0];
    for (int i = 0; i < n; ++i) {
        if (a[i] + b[i] != sum) {
            ok = 0;
            break;
        }
    }
    if (!ok) cout << "-1\n";
    else {
        for (int i = 0; i < n; ++i)
            cout << a[i] << " \n"[i == n - 1];
        for (int i = 0; i < n; ++i)
            cout << b[i] << " \n"[i == n - 1];
    }
}
int main() {
    ios_base::sync_with_stdio(0);
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