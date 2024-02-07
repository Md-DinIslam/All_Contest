/* GREEN UNIVERSITY OF BANGLADESH
    Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;

// Debug..
#ifdef LOCAL
#include "debug.h"
#endif

#define ll long long
void solve() {
    int n;
    cin >> n;
    vector<int> v(n + 1), pref(n + 1, 0);
    set<int> st;
    for (int i = 0, x; i < n; ++i) {
        cin >> v[i];
        // pref[i] = pref[i - 1] + (v[i] != v[i - 1]);
    }
    for (int i = 0; i < n - 1; ++i) {
        if (v[i] != v[i + 1]) st.insert(i + 1);
    }
    // debug(pref);
    int q;
    cin >> q;
    while (q--) {
        int lb, rb;
        cin >> lb >> rb;
        auto indx = st.lower_bound(lb);
        if (indx != st.end() && *indx < rb)
            cout << *indx << " " << *indx + 1 << '\n';
        else cout << "-1 -1\n";
    }
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}