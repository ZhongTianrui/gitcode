#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while (T --) {
        int ch1[205] = {0}, ch2[205] = {0}, ans = 0;
        int n, k, use = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i ++) {
            char ch; cin >> ch;
            if (ch >= 'A' and ch <= 'Z') ch1[ch - 65] ++;
            else ch2[ch - 97] ++;
            // cout << ch << " " << ch - 65 << " " << ch - 97 << "\n";  
        }
        for (int i = 0; i <= 30; i ++) {
            // cout << ch1[i] << " " << ch2[i] << "\n";
            ans += (min(ch1[i], ch2[i]));
            int f = ch1[i], s = ch2[i];
            if (use < k) {
                int tem = max(f, s) - min(f, s);    
                int can = tem / 2;
                if (use + can <= k) {
                    use += can;
                    ans += can;
                } else {
                    ans += k - use;
                    use = k;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}