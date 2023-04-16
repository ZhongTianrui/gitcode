#include<bits/stdc++.h>
using namespace std;
struct pl {
	long long num;
	int id;
	bool operator <(const pl tmp) {
		return num > tmp.num;
	}
}
a[100005];
bool flag[100005];
int main() {
	int n;
	int k;
	scanf("%d%d",&n,&k);
	for (int i = 1; i <= n; i++) {
		scanf("%d",&a[i].num);
		a[i].id = i;
	}
	sort(a+1,a+n+1);
	long long ans = 0;
	int nowlow = k+1;
	for (int i = 1; i <= n; i++) {
		int j;
		for (j = nowlow; j <= k+n; j++) {
			if(flag[j-k] == 1) continue;
			if(j > a[i].id) {
				flag[j-k] = 1;
				if(j == nowlow) {
					for (int kkk03 = j+1; kkk03 <= k+n; kkk03++) {
						if(flag[kkk03-k] == 0) {
							nowlow = kkk03;
							break;
						}
					}
				}
				break;
			}
		}
		ans += a[i].num * j;
	}
	cout << ans << "\n";
	return 0;
}