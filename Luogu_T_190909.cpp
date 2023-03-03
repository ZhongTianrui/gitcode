#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const int N=2005;
struct node
{
    int x,y;
};
struct Q
{
    int x,y,step;
    friend bool operator < (Q a, Q b)
    {
        return a.step>b.step;//这里注意符号要为'>'
    }
};
vector<node>v[N][N];
bool maps[N][N];
bool vis[N][N];
priority_queue<Q>q; 
int n,p,qq;
int dx[4]= {1,-1,0,0};
int dy[4]= {0,0,1,-1};
int bfs()
{
    while(q.size())
    {
        auto T=q.top();
        q.pop();
        if(vis[T.x][T.y]||T.x<1||T.x>n||T.y<1||T.y>n||maps[T.x][T.y]==1)    continue;
        if(T.x==n&&T.y==n)    return T.step;
        vis[T.x][T.y]=true;
        for(int i=0; i<4; i++)
        {
            q.push({T.x+dx[i],T.y+dy[i],T.step+1});
        }
 
        for(auto u:v[T.x][T.y])
        {
            q.push({u.x,u.y,T.step+4});
        }
    }
    return -1;
}
int main()
{
    cin>>n>>qq;
    for(int i=1; i<=n; i++)
    {
        for (int j = 1; j <= n; j ++) {
            char ch; cin >> ch;
        if (ch == '#') maps[i][j]=1;
        }
    }
    for(int i=1; i<=qq; i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        v[x1][y1].push_back({x2,y2});
    }
    q.push({1,1,1});
    for(auto u:v[1][1])    q.push({1,1,4});
    cout<<bfs();
    return 0;
}