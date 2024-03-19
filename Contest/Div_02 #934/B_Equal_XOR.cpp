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
    int n, k;
    cin >> n >> k;


    vector<int> a(n), b(n);
    map<int, int> cntA, cntB;

    for (auto &x : a) {
        cin >> x;
        cntA[x]++;
    }

    for (auto &x : b) {
        cin >> x;
        cntB[x]++;
    }

    // debug(cntA);
    // debug(cntB);

    vector<int> ans, ans2;
    for (int i = 0; i < n; ++i) {
        if (cntA[a[i]] == 1) {
            ans.pb(a[i]);
            ans2.pb(a[i]);
        }
    }

    n = (int) ans.size();
    if (n & 1) {
        ans.pop_back();
        ans2.pop_back();
    }

    // sort(all(ans));
    // sort(all(ans2));

    for (auto &pr : cntA) {
        if (pr.ss == 2) {
            ans.pb(pr.ff);
            ans.pb(pr.ff);
        }
    }

    for (auto &pr : cntB) {
        if (pr.ss == 2) {
            ans2.pb(pr.ff);
            ans2.pb(pr.ff);
        }
    }

    for (int i = 0; i < 2 * k; ++i) {
        cout << ans[i] << " \n"[i == 2 * k - 1];
    }

    for (int i = 0; i < 2 * k; ++i) {
        cout << ans2[i] << " \n"[i == 2 * k - 1];
    }

    // debug(ans);
    // debug(ans2);
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