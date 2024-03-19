#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,sum,i,j,x,y,z,cnt=0;
	cin>>m>>n;
	sum=m*100+n*50;
	for(z=1;z<=(sum/5)-1;z++)
	{
		for(y=1;y<=(sum-5*z)/2&&sum-2*y-5*z>0;y++)
		{
			cnt++;			
		}
	}
	cout<<cnt;
	return 0;
} 

