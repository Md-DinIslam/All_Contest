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
    vector<int> v(n);
    ll total = 0;
    for (auto &x : v)
        cin >> x, total += x;
    if (total % n != 0) cout << "NO\n";
    else {
        ll temp = 0;
        total /= n;
        for (auto &x : v) {
            if (total < x) {
                temp += x - total;
            }
            else {
                temp -= (total - x);
            }
            if (temp < 0) {
                cout << "NO\n";
                return;
            }
        }
        cout << (temp == 0 ? "YES" : "NO") << '\n';
    }
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}