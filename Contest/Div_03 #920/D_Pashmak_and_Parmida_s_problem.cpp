/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
const int mxN = 1e6 + 10;
ll v[mxN], cntI[mxN], cntJ[mxN], bit[mxN];
void upd(int i, int val) {
    while (i > 0 && i < mxN) {
        bit[i] += val;
        i += (i & -i);
    }
}
ll qry(int i) {
    ll ans = 0;
    while (i > 0) {
        ans += bit[i];
        i -= (i & -i);
    }
    return ans;
}
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    // Left to Right Occurences
    map<ll, int> cnt;
    for (int i = 0; i < n; ++i) {
        cnt[v[i]]++;
        cntI[i] = cnt[v[i]];
    }
    // Right to Left Occurences
    for (int i = 0; i < n; i++) {
        cntJ[i] = cnt[v[i]];
        cnt[v[i]]--;
    }
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += qry(n) - qry(cntJ[i]);
        upd(cntI[i], 1);
    }
    cout << ans;
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
    // cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { //Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}