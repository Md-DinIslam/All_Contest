#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t;
    string b;
    cin >> t >> b;
    while (t--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '_') cout << " ";
            else if (s[i] >= 'A' && s[i] <= 'Z')
                cout << (char) (b[s[i] - 'A'] + 'A' - 'a');
            else if (s[i] >= 'a' && s[i] <= 'z')
                cout << (char) (b[s[i] - 'a']);
            else cout << s[i];
        }
        cout << '\n';
    }
}