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
#define ff first
#define ss second
const int mxN = 2e5 + 10;
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> cnt;
    string ans = "";
    for (auto &x : v) {
        cin >> x;
        cnt[x]++;
        char ch = (char) (cnt[x] - 1 + 'a');
        ans.pb(ch);
    }
    cout << ans << '\n';
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