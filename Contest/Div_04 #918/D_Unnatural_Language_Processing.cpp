/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll n;
    string s;
    cin >> n >> s;
    map<int, int> mp;
    mp['a'] = 1;
    mp['e'] = 1;
    mp['i'] = 1;
    mp['o'] = 1;
    mp['u'] = 1;
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (mp[s[i]]) {
            ans.push_back(s[i]);
            int j = i + 1;
            if (j + 1 <= n - 1) {
                if (mp[s[j]] == 0 and mp[s[j + 1]] == 0) {
                    ans.push_back(s[j]);
                    ans.push_back('.');
                    i = j;
                } else ans.push_back('.');
            }
        } else ans.push_back(s[i]);
    }

    cout << ans << endl;
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