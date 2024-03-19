#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,b,c,d,count=0;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		s=a[i]/1000;
		b=(a[i]/100)%10;
		c=(a[i]%100)/10;
		d=a[i]%10;
		if(d-(s+b+c)>0) count++;
	}
	cout<<count;
	return 0;
} 
