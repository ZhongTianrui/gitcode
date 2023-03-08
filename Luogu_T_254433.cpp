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
    for(int i=1;i<=n;i++){
        dp[i][1]=dp[i-1][0]+a[i];
        dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
    }
    int ans = max(dp[n][0], dp[n][1]);
    dp[1][1] = a[n];
    for(int i=1;i<=n;i++){
        dp[i][1]=dp[i-1][0]+a[i];
        dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
    }
    cout<<min(ans, min(dp[n][0], dp[n][1]))<<endl;
}