#include <bits/stdc++.h>
using namespace std;
bool vowel(char &c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
void solve() {
    string s;
    cin >> s;
    int cnt = 0, ans = 0;
    for (int i = 0; i < s.size(); ++i) {
        ans = max (ans, cnt);
        if (vowel(s[i])) cnt++;
        else cnt = 0;
    }
    if (ans > 2) cout << "Happy\n";
    else cout << "Sad\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
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