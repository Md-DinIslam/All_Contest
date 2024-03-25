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
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second

void Din() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(all(v));

    int j = (n + 1) / 2 - 1;
    int ans = 1;

    for (int i = j; i < n - 1; ++i) {
        if (v[i] == v[i + 1])
            ans++;
        else break;
    }

    cout << ans << '\n';
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