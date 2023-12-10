/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> v;
void Conquer(int s, int e) {
    int mid = (s + e) / 2;
    int lb = s, rb = mid + 1;
    vector<int> temp;
    while (lb <= mid && rb <= e) {
        if (v[lb] <= v[rb]) temp.push_back(v[lb++]);
        else temp.push_back(v[rb++]);
    }
    while (lb <= mid) temp.push_back(v[lb++]);
    while (rb <= e) temp.push_back(v[rb++]);
    int j = 0;
    for (int i = s; i <= e; ++i) {
        v[i] = temp[j++];
    }
    return;
}
void Divide(int s, int e) {
    if (s >= e) return;
    int mid = (s + e) / 2;
    // cout << "Yes\n";
    Divide(s, mid);
    Divide(mid + 1, e);
    Conquer(s, e);
}
void solve() {
    int n;
    cin >> n;
    v.resize(n);
    for (auto &x : v) cin >> x;
    Divide(0, n - 1);
    // for (auto &x : v) cout << x << " ";
    int cnt = 1;
    for (int i = 1; i < n; ++i)
        if (v[i] != v[i - 1]) cnt++;
    cout << cnt << '\n';
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
    // cin >> t;
    while (t--) solve();

}