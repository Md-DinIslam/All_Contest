/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
const int mxN = 2e5 + 10;
int indegree[mxN];
void solve() {
    int n;
    cin >> n;
    for (int i = 1, a, b; i < n; ++i) {
        cin >> a >> b;
        indegree[a]++, indegree[b]++;
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        cnt += (indegree[i] == 1);
        indegree[i] = 0;
    }
    cout << (cnt + 1) / 2 << '\n';
}
int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}