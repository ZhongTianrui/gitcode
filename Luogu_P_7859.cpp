#include <bits/stdc++.h>

using namespace std;
struct node {
    int x;
    int y;
};
node b[1005];
int n, m, a[1005], cnt = 0;
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i ++) {
        cin >> b[i].x >> b[i].y;
    }
    for (int i = 0; i < (1 << n); i ++) {
        bool bbb = 0;  
        for (int j = 1; j <= m; j ++) {
            if (i & (1 <<  (b[j].x - 1 )) and i & (1 << (b[j].y - 1))) {
                bbb = 1;
                break;
            }
        }
        if (bbb == 0) {   
            cnt ++;
        }
    }
    cout << cnt;
    return 0;
}