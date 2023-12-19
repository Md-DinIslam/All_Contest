/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    string s;
    cin >> n >> s;
    int cnt[26] = {0};
    for (int i = 0; i < n; ++i) {
        char ch = tolower(s[i]);
        cnt[ch - 'a']++;
    }
    int ans = 0;
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] >= i + 1)
            ans++;
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