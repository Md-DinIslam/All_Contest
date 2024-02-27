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
#define ff first
#define ss second

void Din() {
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> cnt;
    int mnV = 2e9;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        cnt[v[i]]++;
        mnV = min(mnV, v[i]);
    }

    if (cnt[mnV] == 1) {
        cout << "YES\n";
        return;
    }

    for (auto &x : v) {
        if (x % mnV != 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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