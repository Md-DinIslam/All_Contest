/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    
    // 3, 2+1
    
    // 3,, 2 0 0 1 1
    
    //  3 - 3 = 0;
    
    // x = 8, (Sum - x)
    
    int n;
    cin >> n;
    unordered_map<ll, ll> cnt;
    ll evSum = 0, oddSum = 0;
    string ans = "NO";
    cnt[0]++;
    for (int i = 1; i <= n; ++i) {
        ll x;
        cin >> x;
        if (i & 1) oddSum += x;
        else evSum += x;
        ll df = oddSum - evSum;
        if (df == 0 || cnt.find(df) != cnt.end()) {
            ans = "YES";
        }
        cnt[df]++;
    }
    cout << ans << '\n';
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