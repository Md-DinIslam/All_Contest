/* GREEN UNIVERSITY OF BANGLADESH
            Md DinIslam
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int n = s.size();
    if (s == "COV") {
        cout << "Veikur!\n";
        return;
    }
    if (n < 3) {
        cout << "Ekki veikur!\n";
        return;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (s.substr(i, j) == "COV") {
                cout << "Veikur!\n";
                return;
            }
        }
    }
    cout << "Ekki veikur!\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    // for (int i = 1; i <= t; ++i) {
    //     cout << "Case " << i << ": ";
    //     solve();
    // }
}