#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
using namespace std;
int t,n,m,mp[10][10] = {0},vis[10][10] = {0},ans,maxx;
int dir[8][2] = {1,0,-1,0,0,1,0,-1,1,1,-1,1,1,-1,-1,-1};	//记录八个方向 
void dfs(int x,int y)
{
	if(y >= m + 1)//当y到边界时，搜索下一行 
	{
		dfs(x + 1, 1);
		return;
	}
	if(x >= n + 1)//当x到边界时，搜索结束，刷新最大值 
	{
		maxx = max(ans,maxx);
		return;
	}
	
	dfs(x,y+1);// 不取此数的情况 
	
   if(vis[x][y]==0)//取此数的情况（需保证此数周围没有取其他数，即mark[i][j]==0）
   { 
        ans+=mp[x][y];
       	for(int i = 0; i < 8; i++)
       	{
       		int dx = x + dir[i][0];
			int dy = y + dir[i][1];
			vis[dx][dy]++;	//不能用 vis[dx][dy] = 1 标记因为其他的也可能影响这个点。如果回溯为0则是把全部的影响都弄没了 
		}
        dfs(x,y+1);
       	for(int i = 0; i < 8; i++)
       	{
       		int dx = x + dir[i][0];
			int dy = y + dir[i][1];
			vis[dx][dy]--;	
		}
        ans-=mp[x][y];
    }
	
}
int main()
{
	cin >> t;
	while(t--)
	{
		memset(mp,0,sizeof(mp));
		memset(vis,0,sizeof(vis));

		cin >> n >> m;
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
				cin >> mp[i][j];
		ans = 0;
		maxx = 0;
		dfs(1,1);
		cout << maxx << endl;
	 } 
	 return 0;
}
