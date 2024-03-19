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
    map<int, int> cnt;
    for (auto &x : v) {
        cin >> x;
        cnt[x]++;
    }

    // debug(cnt);
    vector<int> singleEle;
    set<int> ans;
    for (auto &pr : cnt) {
        if (pr.ss == 1)
            singleEle.pb(pr.ff);
        if (pr.ss > 1)
            ans.insert(pr.ff);
    }

    n = singleEle.size();
    if (n > 0) {
        sort(all(singleEle));

        for (int i = 0; i < n; i += 2) {
            ans.insert(singleEle[i]);
        }
    }

    // debug(ans);
    int i = 0;
    for (auto &x : ans) {
        if (x != i) {
            break;
        }
        ++i;
    }

    cout << i << '\n';
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