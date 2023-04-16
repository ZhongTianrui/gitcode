#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=1e5+10;
ll len[MAXN],cnt;
bool check(ll k,ll x) {
	//cout << k << " " << x << " " << len[k-1] << endl;
	if(k==1) {
		return true;
	}
	if(k==2) {
		return false;
	}
	if(len[k-1]>=x) {
		return check(k-1,x);
	} else {
		return check(k-2,x-len[k-1]);
	}
}
int main() {
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	ll q;
	scanf("%lld",&q);
	len[1]=1;
	len[2]=1;
	for (ll i=3;;i++) {
		if(len[i-1]+len[i-2]<0) {
			cnt=i-1;
			break;
		}
		len[i]=len[i-1]+len[i-2];
	}
	for (ll i=1;i<=q;i++) {
		ll n,k;
		scanf("%lld%lld",&n,&k);
		ll a=k/26+1,b=k%26;
		if(b==0) {
			a--;
			b=26;
		}
		n=min(n,cnt);
		if(check(n,a)) {
			printf("%c\n",b-1+'A');
		} else {
			printf("%c\n",b-1+'a');
		}
	}
	return 0;
}