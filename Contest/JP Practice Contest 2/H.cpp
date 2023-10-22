#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    cout << s[0];
    for (int i = 1; i < s.size(); i += 2) {
        cout << s[i];
    }
    cout << '\n';
}
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}