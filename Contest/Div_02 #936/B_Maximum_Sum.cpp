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

const int mod = 1e9 + 7;

void Din() {
    int n, k;
    cin >> n >> k;

    ll totSum = 0, subSum = 0, mxSubSum = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        subSum = max((ll)x, subSum + x);
        mxSubSum = max(mxSubSum, subSum);

        totSum += x;
    }

    for (int i = 0; i < k; ++i) {
        totSum = ((totSum + mxSubSum) % mod + mod) % mod;

        mxSubSum += mxSubSum;
        mxSubSum %= mod;
    }

    cout << totSum << '\n';
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