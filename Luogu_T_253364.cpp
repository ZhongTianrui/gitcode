#include <bits/stdc++.h>

using namespace std;
int n, m, a[100005];
vector <int> u[100005];
long long dp[100005], ans = -1e15; 
long long DFS(int I) {
    if (dp[I] > -1e18) return dp[I];
    dp[I] = a[I];
    for (int i = 0; i < u[I].size(); i ++) {
        dp[I] = max(dp[I], a[I] + DFS(u[I][i]));
    }
    return dp[I];
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
        dp[i] = -1e18;
    }
    for (int i = 1; i <= n; i ++) {
        int x, y; cin >> x >> y;
        u[x].push_back(y);
    }
    for (int i = 1; i <= n; i ++) {
        ans = max(ans, DFS(i));
    }
    cout << ans;
    return 0;
}