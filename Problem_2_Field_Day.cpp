#include <bits/stdc++.h>

using namespace std;
int cnt[105];
string s[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int C, n;
    cin >> C >> n;
    for (int i = 1; i <= n; i ++) {
        cin >> s[i];
    }
    for (int i = 1; i <= n; i ++) {
        int Max = 0;
        for (int j = 1; j <= n; j ++) {
            int Cnt = 0;
            for (int k = 1; k <= C; k ++) {
                if (s[i][k] != s[j][k] and i != j) Cnt ++;
            }
            Max = max(Max, Cnt);
        }
        cnt[i] = Max;
        // cnt[j] = max(Max, cnt[j]);
        
    }
    for (int i = 1; i <= n; i ++) cout << cnt[i] + 1 << "\n";
    return 0;
}