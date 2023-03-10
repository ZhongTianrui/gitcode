#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, m, cnt[1919][810];
int main()
{
    cin >> t;
    while(t--)
    {
        memset(cnt, 0, sizeof(cnt));
        cin >> n >> m;
        for(int i = 1; i <= m; i++)
        {
            cnt[1][i] = i;
        }
        for(int i = 2; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cnt[i][j] = (i - 1) * (1 << __lg(m) + 1) + j;
            }
        }
        cout << n * m << endl;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cout << cnt[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
