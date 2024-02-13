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
    for (auto &x : v)
        cin >> x;
    int i = 0;
    while (i < n - 1) {
        if (v[i] == v[i + 1])
            ++i;
        else break;
    }
    if (i == n - 1) {
        cout << "0\n";
        return;
    }
    int mxI = i, j = n - 1;
    i = n - 1;
    while (i > 0) {
        if (v[i] == v[i - 1]) {
            i--;
            j--;
        }
        else break;
    }
    mxI++;
    if (v[0] == v[n - 1]) {
        cout << j - mxI << '\n';
    }
    else {
        mxI = max(mxI, n - j);
        cout << n - mxI << '\n';
    }
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}