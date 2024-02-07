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
#define pb push_back
void solve() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B') {
            v.pb(i+1);
        }
    }
    n = v.size();
    cout << (n == 0 ? 0 : (v[n - 1] - v[0]) + 1) << '\n';
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