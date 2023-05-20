#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
using namespace std;
int t,l,ke,len,len1,x,y,bz[1005],k,now,q[1005];
char r[1005],s[1005],f[105][1005],ans[1005];
int main()
{
	freopen("complexity.in","r",stdin);
	freopen("complexity.out","w",stdout);
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&l);
		scanf("%s",r+1);
		len=strlen(r+1);
		memset(q,0,sizeof(q));
		int bzzz=0,bbb=0,as=0;now=0;k=0;
		for(int j=1;j<=l;j++)
		{
			int bb=0,bzz=0;
			len1=1;x=y=-1;
			s[len1]=getchar();
			while(s[len1]!='F'&&s[len1]!='E')
				s[len1]=getchar();
			if(s[len1]=='F') f[++k][len1]=s[len1],bb=1;
			while(s[len1]=='F'||s[len1]==' '||s[len1]=='E'||s[len1]=='n'||s[len1]>='0'&&s[len1]<='9'||s[len1]>='a'&&s[len1]<='z')
			{
				if(s[len1]=='F') now++;
				else if(s[len1]=='E') bzz=1;
				else if(s[len1]=='n'&&!bzzz)
				{
					if(x==-1) x=1001;
					else y=1001;
				}
				else if(s[len1]>='0'&&s[len1]<='9'&&!bzzz)
				{
					if(x==-1)
					{
						x=0;
						x=x*10+s[len1]-'0';
					}
					else if(y==-1&&x!=-1&&(s[len1-1]>='0'&&s[len1-1]<='9'))
						x=x*10+s[len1]-'0';
					else
					{
						if(y==-1) y=0;
						y=y*10+s[len1]-'0';
					}
				}
				if(bb) f[k][len1]=s[len1];
				len1++;
				s[len1]=getchar();
			}
			if(y==1001&&x!=1001) q[now]=1;
			if(x>y&&!bzzz) bzzz=k;
			for(int jk=1;jk<now;jk++)
				if(f[k][3]==f[jk][3])
				{
					bbb=1;
					break;
				}
			if(bzz)
			{
				if(bzzz==now) bzzz=0;
				bzz=0;
				int jss=0;
				for(int i=1;i<=now;i++)
					jss+=q[i];
				q[now]=0;
				as=max(as,jss);
				now--;
			}
		}
		if(bbb||now) printf("ERR\n");
		else
		{
			if(as)
			{
				int ll=4;
				ans[1]='O';ans[2]='(';
				ans[3]='n';ans[4]='^';
				int aa=0,bb=0,cc=0;
				if(as>99) aa=as/100,as-=100;
				if(as>9) bb=as/10,as%=10;
				if(as>0) cc=as;
				if(aa) ll++,ans[l]=aa+'0';
				if(!bb&&ll!=4||bb) ll++,ans[ll]=bb+'0';
				if(!cc&&ll!=4||cc) ll++,ans[ll]=cc+'0';
				ll++;
				ans[ll]=')';
				if(ll!=len)
				{
					printf("No\n");
					continue;
				}
				int bbbb=0;
				for(int kk=1;kk<=ll;kk++)
					if(r[kk]!=ans[kk])
					{
						printf("No\n");
						bbbb=1;
						break;
					}
				if(!bbbb) printf("Yes\n");
			}
			else
			{
				ans[1]='O',ans[2]='(',ans[3]='1',ans[4]=')';int bbbb=0;
				for(int kk=1;kk<=4;kk++)
					if(r[kk]!=ans[kk])
					{
						printf("No\n");
						bbbb=1;
						break;
					}
				if(!bbbb) printf("Yes\n");
			}
		}
	}
}
