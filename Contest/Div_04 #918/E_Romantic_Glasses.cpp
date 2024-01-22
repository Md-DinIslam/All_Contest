/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxV = 1e9;
void solve() {
    int n;
    cin >> n;
    ll v[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (i & 1) v[i] *= -1;
    }
    ll ok = 0, sum = 0;
    map<ll, int> cnt;
    cnt[0]++;
    for (int i = 0; i < n; ++i) {
        sum += v[i];
        if (cnt.find(sum) != cnt.end()) {
            ok = 1;
            break;
        }
        cnt[sum]++;
    }
    cout << (ok ? "YES\n" : "NO\n");
}
int main()
{
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
    // fl(i, t) { //Kickstart
    //     cout << "Case #" << i + 1 << ": "; solve();
    // }
    return 0;
}
