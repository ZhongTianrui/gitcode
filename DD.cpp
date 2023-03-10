#include <iostream>
#include <cstdio>
#include <algorithm> 
using namespace std;
int a[1001];
int minc[1001];
int main(int argc, char const **argv) {
	int K;
	cin >> K;
	while(K--) {
		int cnt = 0;
		int sum = 0;
		int m, n, pos = 0;
		cin >> n >> m;
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		sort(a, a+n);
		//只要购买一个礼物 
		if(m == 1) {
			cout << "0 " << a[0] << endl;
		} else {
			for(int i = 0; i <= n - m; i++) {
				//minc用来记录连续的m个礼物的最小差价 
				minc[cnt++] = a[i+m-1] - a[i];
			}
			int min = minc[0];
			for(int i = 1; i < cnt; i++) {
				if(min == 0) {
					break;
				}
				if(minc[i] < min) {
					min = minc[i];
					pos = i;
				}
			}
			for(int j = pos; j < pos+m; j++) {
				sum += a[j];
			}
			printf("%d %d\n", minc[pos], sum);
		}
	}
	return 0;
} 
