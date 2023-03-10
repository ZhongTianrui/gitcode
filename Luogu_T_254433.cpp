#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=1e6+100;
int dp[maxn][2];
int a[maxn];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n + 1;i++){
        dp[i][1]=dp[i-1][0]+a[i];
        dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
    }
    for (int i = 0; i <= 1; i ++) {
        for (int j = 1; j <= n + 1; j ++) {
            cout << dp[j][i] << " ";
        }
        cout << "\n";
    }
    cout<<max(dp[n][0],dp[n][1])<<endl;
}