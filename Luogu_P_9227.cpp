#include<bits/stdc++.h>
using namespace std;
long long n,k,t;
long long a[500010],b[500010];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		if(n%2==0)
		{
			if(k%2==0)
			{
				for(int i=1;i<=n;i++)
				{
					cout<<a[i]<<" ";
				}
			}
			else
			{
				long long sum=0;
				for(int j=1;j<=n;j++)
				{
					sum^=a[j];
				}
				for(int i=1;i<=n;i++) cout<<(a[i]^sum)<<" ";
			}
		}
		else
		{
			long long sum=0;
			for(int j=1;j<=n;j++)
			{
				sum^=a[j];
			}
			for(int i=1;i<=n;i++) cout<<(a[i]^sum)<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}