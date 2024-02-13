/* GREEN UNIVERSITY OF BANGLADESH
    Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
void solve() {
    int a;
    cin >> a;
    vector<int> ans;
    int x = 2, k = 1;
    while (k <= 26 && a) {
        if (a - k <= x * 26) {
            a -= k;
            ans.pb(k);
            --x;
        }
        else k++;
    }
    for (auto &y : ans) {
        --y;
        cout << (char) (y + 'a');
    }
    cout << '\n';
    // cout << value << '\n';
    // debug(ans);
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}