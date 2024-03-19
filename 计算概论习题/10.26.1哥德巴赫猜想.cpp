#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10001],m,x,i,j,n,cnt,t=0;
	cin>>m;
	for(i=3;i<m;i++)
	{
		cnt=0;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				cnt=1;
				break;
			}
		}
		if(cnt==0) 
		{
			a[t]=i;
			t++;
		}
	}	
	for(i=0;i<t;i++)
	{
		for(j=t-1;j>=i;j--)//错点在于a[i]and a[j]可能相等！之前写的是i==j（验证边界条件） 
		if(a[i]+a[j]==m)
		cout<<a[i]<<" "<<a[j]<<endl;
	}
	return 0;
} 
