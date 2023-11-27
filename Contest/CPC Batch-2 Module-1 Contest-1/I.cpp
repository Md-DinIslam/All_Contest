/* GREEN UNIVERSITY OF BANGLADESH
            Md DinIslam
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    set<int> st;
    for (int i = 0; i < 10; ++i) {
        int x;
        cin >> x;
        st.insert(x % 42);
    }
    cout << st.size() << '\n';
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