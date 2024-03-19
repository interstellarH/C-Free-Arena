#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[301],m,n,p,b[301],i;
	cin>>n>>p>>m;
	for(i=1;i<=n;i++)
	{
		a[i]=1;
	}
	p--;
	int cnt=0,out=0,t=0;//out记录出圈人数，cnt记录 
	while(out<n)
	{
		p++;
		if(p==n+1) p=1;
		if(a[p]!=0)
		{
			cnt++;
			if(cnt==m)
			{
				a[p]=0;
				out++;
				cnt=0;
				b[t]=p;t++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(i==0)cout<<b[i];
		else cout<<','<<b[i];
	}
	return 0;
}
