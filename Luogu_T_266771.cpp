#include <bits/stdc++.h>

using namespace std;
int n, m, s;
vector <int> v[100005], w[100005];
long long dis[1000005], vis[1000005];
struct node{
    int v, w;
    friend bool operator < (node a, node b) {
        return a.w > b.w;
    }
} t;
priority_queue <node> pqn;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i ++) {
        int x, y, z; cin >> x >> y >> z;
        v[x].push_back(y);
        w[x].push_back(z);
    }
    for (int i = 1; i <= n; i ++) {
        dis[i] = 2147483647; 
    }
    dis[s] = 0;
    t.v = s; t.w = 0;
    pqn.push(t);
    while (pqn.size()) {
        int nw = pqn.top().v; pqn.pop();
        if (vis[nw]) continue;
        vis[nw] = 1;
        for (int i = 0; i < v[nw].size(); i ++) {
            if (dis[v[nw][i]] > (long long)(dis[nw] + w[nw][i])) dis[v[nw][i]] = (long long)(dis[nw] + w[nw][i]), t.w = dis[v[nw][i]], t.v = v[nw][i], pqn.push(t);
        }
    }
    long long maxn = -1e18;
    for (int i = 1; i <= n; i ++) maxn = max(maxn, dis[i]);
    if (maxn == 2147483647) maxn = -1;
    cout << maxn;
    return 0;
}