#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x,i;
	cin>>n>>m;
	int a[n+m+10];
	for(i=0;i<n;i++)
	{
		cin>>x;
		a[i]=x;
	}
	for(i=n-1;i>=0;i--)//注意这里一定要从后往前，否则会被覆盖 
	{
		a[i+m]=a[i];
	}
	for(i=0;i<m;i++) 
	{
		a[i]=a[i+n]; 
		a[i+n]=0;
	}
	int cnt=0;
	for(i=0;i<n;i++)
	{
		if(cnt!=0) cout<<' ';
		cout<<a[i];
		cnt=1;
	}
	return 0;
} 

