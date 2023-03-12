#include<iostream>
using namespace std;
long long dp[10000][2];
int main() {
    int t,m;
    cin >> m >> t;
    int a, b;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        for (int j = t; j >= 0; j--) {
            dp[j][1] = max(dp[j][1], dp[j][0] + b);
            if (j >= a) {
                dp[j][0] = max(dp[j][0], dp[j - a][0] + b);
                dp[j][1] = max(dp[j][1], dp[j - a][1] + b);
            }
        }
    }
    cout << dp[t][1];
}