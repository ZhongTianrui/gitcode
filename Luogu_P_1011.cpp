#include<iostream>
using namespace std;
int a,n,m,x,t;
int Fibo[25];
struct train{//为了看上去明白就用了结构体，其实用二维数组或两个一维数组就行了
    int a,t;//存储每一站火车出站时人数a和t的系数
}sum[25];
void pre()
{
    Fibo[1]=1;
    Fibo[2]=1;
    for(int i=3;i<=n;i++)//求斐波那契数列
        Fibo[i]=Fibo[i-1]+Fibo[i-2];
    sum[1].a=1;//根据表格初始化值
    sum[2].a=1;
    sum[3].a=2;
    for(int i=4;i<=n;i++)//根据表格规律计算a和t的系数
    {
        sum[i].a+=Fibo[i-4]+sum[i-1].a;
        sum[i].t+=Fibo[i-3]+sum[i-1].t;
    }
    return ;
}
void solve()
{
    t=(m-sum[n-1].a*a)/sum[n-1].t;//计算t的值(注意是终点站前一站)
    cout<<sum[x].a*a+sum[x].t*t<<endl;//输出第x站火车出站时人数
    return ;
}
int main()
{
    cin>>a>>n>>m>>x;//读入始发站人数，总车站数，n-1站火车出站时人数
    pre();//预处理
    solve();
    return 0;
}
