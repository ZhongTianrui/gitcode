#include<bits/stdc++.h>
using namespace std;
int fx[100005],fy[100005],ft[100005];
int x[100005],y[100005],t[100005];
int main()
{
    int g,n; cin >> g >> n;
    for(int i = 1; i <= g; i++){
        scanf("%d%d%d",&fx[i],&fy[i],&ft[i]);
    }
    for(int i = 1; i <= n; i++){
        scanf("%d%d%d",&x[i],&y[i],&t[i]);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1;j <= g; j++){
            long long juli = abs(x[i] - fx[j]) + abs(y[i] - fy[j]);
            if(juli <= abs(ft[j] - t[i])){
                cnt++;
                break;
            }
        } 
    }
    cout << cnt << "\n";
    return 0;
}