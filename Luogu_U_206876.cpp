#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        long long a, b;
        set <long long> st;
        cin >> a >> b;
        long long n = a;
        for (long long i = 1; i * i <= n; i ++) {
            if (n % i == 0) {
                st.insert(i);
                
                // cout << i << " ";
            }
            if (n % (n / i) == 0) {
                st.insert(n / i);
                // cout << n / i << " ";
            }
        }
        n = b;
        for (long long i = 1; i * i <= n; i ++) {
            if (n % i == 0) {
                st.insert(i);
                
                // cout << i << " ";
            }
            if (n % (n / i) == 0) {
                st.insert(n / i);
                // cout << n / i << " ";
            }
        }
        cout << st.size() << "\n";
    }
    return 0;
}