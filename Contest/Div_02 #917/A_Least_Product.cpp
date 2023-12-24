/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, indx = 0;
    cin >> n;
    ll v[n];
    bool cntNeg = 0, cntZ = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] < 0) cntNeg ^= 1;
        else if (v[i] == 0) cntZ = 1;
    }
    if (cntZ)
        cout << "0\n";
    else if (cntNeg)
        cout << "0\n";
    else {
        cout << "1\n";
        // sort(v, v + n, greater<ll>());
        cout << "1 0\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    cin >> t;
    while (t--) solve();
    // fl(i, t) { //Kickstart
    //     cout << "Case #" << i + 1 << ": "; solve();
    // }
    return 0;
}