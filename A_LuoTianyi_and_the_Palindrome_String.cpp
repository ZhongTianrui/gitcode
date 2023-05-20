#include <bits/stdc++.h>

using namespace std;
bool f(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return 0;
        i ++;
        j --;
    }
    return 1;
}
int fun(string s) {
    int maxn = -1;
    for (int i = 0; i < s.size(); i ++) {
        for (int j = i + 1; j < s.size(); j ++) {
            if (f(s.substr(i, j - i + 1)) == 0)  maxn = max(maxn, j - i + 1);
        }
    }
    return maxn;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        string s; cin >> s;
        cout << fun(s) << "\n";
    }
    return 0;
}