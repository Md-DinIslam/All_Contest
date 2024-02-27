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
    int n;
    cin >> n;
    vector<int> v(n);
    ll sum = 0;
    map<int, int> cnt;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        v[i] %= 3;
        cnt[v[i]]++;
        sum += v[i];
    }
    sort(v.begin(), v.end(), greater<int> ());
    // debug(v);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int x = sum % 3;
        if (x == 0) break;
        if (x == 2) {
            ans++;
            break;
        }
        if (cnt[x] > 0) {
            sum -= x;
        }
        else sum -= v[i];
        // else sum--;
        ++ans;
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