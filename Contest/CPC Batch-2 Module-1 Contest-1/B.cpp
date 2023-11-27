/* GREEN UNIVERSITY OF BANGLADESH
            Md DinIslam
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int x, y;
    cin >> x >> y;
    int a = 0, b = 0;
    while (x) {
        a *= 10;
        a = a + (x % 10);
        x /= 10;
    }

    while (y) {
        b *= 10;
        b = b + (y % 10);
        y /= 10;
    }
    // cout << a << " " << b;
    a += b, b = 0;
    while (a) {
        // cout << b << " ";
        b *= 10;
        b = b + (a % 10);
        a /= 10;
    }
    cout << b << '\n';
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