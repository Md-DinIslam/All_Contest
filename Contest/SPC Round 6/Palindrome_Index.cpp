#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-i-1]) {
            return false;
        }
    }
    return true;
}

int palindromeIndex(string s) {
    int n = s.length();
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-i-1]) {
            // Try removing s[i]
            string s1 = s.substr(0, i) + s.substr(i+1);
            if (isPalindrome(s1)) {
                return i;
            }
            // Try removing s[n-i-1]
            string s2 = s.substr(0, n-i-1) + s.substr(n-i);
            if (isPalindrome(s2)) {
                return n-i-1;
            }
            // If both options fail, return -1
            return -1;
        }
    }
    // If the string is already a palindrome, return -1
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        cout << palindromeIndex(s) << endl;
    }
    return 0;
}