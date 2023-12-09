/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[4] = { -1, 1, -1, 1}, dy[4] = { -1, -1, 1, 1};
void solve() {
    int a, b, x1, y1, x2, y2;
    cin >> a >> b >> x1 >> y1 >> x2 >> y2;
    set<pair<int, int>> s1, s2;
    for (int i = 0; i < 4; ++i) {
        s1.insert({x1 + dx[i] * a, y1 + dy[i] * b});
        s1.insert({x1 + dx[i] * b, y1 + dy[i] * a});
        s2.insert({x2 + dx[i] * a, y2 + dy[i] * b});
        s2.insert({x2 + dx[i] * b, y2 + dy[i] * a});
    }
    int ans = 0;
    for (auto &x : s1) {
        if (s2.find(x) != s2.end()) ans++;
    }
    cout << ans << '\n';
}
int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    ll t = 1;
    cin >> t;
    while (t--) solve();

}