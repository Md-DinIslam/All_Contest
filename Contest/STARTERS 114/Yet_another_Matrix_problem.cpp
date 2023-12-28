/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int v[n][n], x = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            v[i][j] = x++;
        }
    }
    if (n % 2 == 0) {
        if(n == 2){
            cout << "-1\n";
            return;
        }
        swap(v[1][1], v[1][2]);
        swap(v[2][0], v[2][1]);
    }
    else {
        int i = 1, j = 1;
        while (i < n - 1 && j < n) {
            swap(v[i][j], v[i][j + 1]);
            ++i, j += 2;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << v[i][j] << " \n"[j == n - 1];
        }
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