#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10001],m,i,cnt,j,t=0;
	cin>>m;
	for(i=m;i>=2;i--)
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
		if(a[i]-a[i+1]==2)
		{
			cout<<a[i+1]<<' '<<a[i];
			break;		
		}
	}
	return 0;
} 
