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
void Din() {
    ll a, b, c;
    cin >> a >> b >> c;

    int cnt = 0;
    set<ll> st;
    for (ll i = 1; i <= c; i *= a) {
        for (ll j = 1; j <= c; j *= b) {
            ll x = (i * j);
            if (c % x == 0) {
                cnt++;
                st.insert(c / x);
            }
        }
    }
    cout << (int) st.size() << '\n';
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) Din();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; Din();
    // }
    return 0;
}