#include<bits/stdc++.h>
using namespace std;
#define P 50005
long long N, M, D, L, cnt;//n:奶牛 M:车道 D：下降车速单位 L:车速最低速
int a[P];
int main(){
	cin >> N >> M >> D >> L;
	for(int i=1; i<=N; i++)
		cin >> a[i];
	sort(a+1, a+N+1);//将N头牛的车速从小到大排序 
	for(int i=1; i<=N; i++){
		if(a[i] < L)
			continue;
		int t = cnt / M;//每个车道上已有的奶牛数量 
		if(a[i] - t*D >= L)//与前面奶牛不相撞的情况下，满足最低速即可 
			++cnt;
	}
	cout << cnt;
	return 0;
}
