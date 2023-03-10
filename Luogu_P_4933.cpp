#include <cstdio>
#include <algorithm>

using namespace std;

#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 1010, mol = 998244353, M = 40010;

int h[N];
int f[N][M];
int n;

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i ++ ) scanf("%d", &h[i]);
	
	int res = n;
	for (int i = 1; i <= n; i ++ ) 
	{
		for (int j = i - 1; j; j -- )
		{
			auto t = h[i] - h[j] + M / 2;
			f[i][t] = (f[i][t] + f[j][t] + 1) % mol;
			res = (res + f[j][t] + 1) % mol;
		}
	}
	
	printf("%d\n", res);
	
	return 0;
}
