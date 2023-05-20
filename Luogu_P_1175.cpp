#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    stack <int> st;
    for (int i = 0; i < s.size(); i ++) {
        if (s[i] >= '0' and s[i] <= '9') {
            cout << s[i] << " "; 
        } else {
            st.push(s[i]);
        }
    }
    return 0;
}