#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 int read(){int f=1,x=0;
    char ss=getchar();
    while(ss<'0'||ss>'9'){if(ss=='-')f=-1;ss=getchar();}
    while(ss>='0'&&ss<='9'){x=x*10+ss-'0';ss=getchar();}
    return f*x;}
int n,m,sum=0;//sum代表找最大的连续数
int f[20],dp[5000],arr[20];//f[i]遍历需要查找的数组。arr找最大的那一组数（输出的）
void dfs(int x){
if(x==m+1)
{
    memset(dp,0,sizeof dp);
    int i=0;
    while(dp[i]<=n)
    {
        i++;
        dp[i]=1000000000;
        for(int j=1;j<=m&&f[j]<=i;j++)
            dp[i]=min(dp[i],dp[i-f[j]]+1);
        if(i-1>sum)
        {
            for(int j=1;j<=m;j++)
                arr[j]=f[j];
            sum=i-1;
        }
    
    }
    return ;
}
for(int i=f[x-1]+1;i<=f[x-1]*n+1;i++)
{
    f[x]=i;
    dfs(x+1);
}

}

int main(){
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

  cin>>n>>m;
  f[1]=1;
  dfs(2);
for(int i=1;i<=m;i++)
    cout<<arr[i] * 2 - 1<<" ";
cout<<endl;
cout<<"MAX ="<<sum<<endl;
}
