#include <bits/stdc++.h>
using namespace std;
void solve() {
    int a, b;
    cin >> a >> b;
    int x = 0, y = 0;
    while (a) {
        x *= 10;
        x += (a % 10);
        a /= 10;
    }
    while(b){
        y *= 10;
        y += (b % 10);
        b /= 10;
    }
    int ans = 0;
    x = x + y;
    while(x){
        ans *= 10;
        ans += (x % 10);
        x /= 10;
    }
    cout << ans << '\n';
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