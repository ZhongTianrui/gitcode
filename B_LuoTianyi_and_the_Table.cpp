
// Problem: LuoTianyi and the Table
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/CF1825B
// Memory Limit: 250 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long
inline int read(){int x=0,f=1;char ch=getchar();while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}return x*f;}
inline void write(int x){if(x<0){x=~(x-1);putchar('-');}if(x>9)write(x/10);putchar(x%10+'0');}
#define put() putchar(' ')
#define endl puts("")
const int MAX = 4e5+10;
int a[MAX];

bool cmp(int x, int y){
	return x > y;
}

void solve(){
	int n = read(), m = read();
	for(int i = 1; i <= n * m; i++){
		a[i] =  read(); 
	}
	sort(a+1, a+n*m+1);
	int x = 0;
	if((n-1)*m < (m-1)*n){
		x = n - 1;
	}else if((n-1)*m == (m-1)*n){
		x = max(n-1, m-1);
	}else{
		x = m - 1;
	}
	int cnt1 = (a[n*m] - a[1]) * max((n-1)*m,(m-1)*n) + (a[n*m]-a[2]) * x;
	sort(a+1, a+n*m+1, cmp);
	int cnt2 = abs(a[n*m] - a[1]) * max((n-1)*m,(m-1)*n) + abs(a[n*m]-a[2]) * x; endl;
	write(max(cnt1, cnt2)),endl;
}

signed main(){
	int t = read();
	while(t--)	solve();
	return 0;
}
