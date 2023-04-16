#include <bits/stdc++.h>

using namespace std;
int n, m, k, to[2000005], val[2000005], nxt[2000005], head[2000005], dp[100005][25];
bool vis[100005];
const int mod = 1e9 + 7;
void DFS(int u) {
    if (vis[u]) return;
    vis[u] = 1;
    dp[u][0] = 1;
    for (int i = head[u]; i; i = nxt[i]) {
        int v = to[i];
        int w = val[i];
        DFS(v);
        for (int j = 0; j < k; j ++) {
            dp[u][j] = (dp[u][j] + dp[v][(j - w + k) % k]) % mod;
        }
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i ++) {
        int u, v, w;
        cin >> u >> v >> w;
        to[i] = v;
        val[i] = w % k;
        nxt[i] = head[u];
        head[u] = i;
    }
    for (int i = 1; i <= n; i ++) {
        DFS(i);
        cout << (dp[i][0] - 1 + mod) % mod << "\n";
    }
    return 0;
}