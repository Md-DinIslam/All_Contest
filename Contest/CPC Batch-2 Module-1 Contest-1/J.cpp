/* GREEN UNIVERSITY OF BANGLADESH
            Md DinIslam
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    string a, b, ans = "";
    cin >> a >> b;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) ans += ".";
        else ans += "*";
    }
    cout << a << '\n' << b << '\n' << ans << "\n\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    // for (int i = 1; i <= t; ++i) {
    //     cout << "Case " << i << ": ";
    //     solve();
    // }
}