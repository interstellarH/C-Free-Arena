#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,i,j,sum=0,mul;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		mul=1;//还是老问题，变量清零 
		for(j=1;j<=i;j++)
		{
			mul*=j;
		}
		sum+=mul;
	 } 
	 cout<<sum;
	return 0;
} 




