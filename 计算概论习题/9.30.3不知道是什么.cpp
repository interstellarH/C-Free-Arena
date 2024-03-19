#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,a;
	double e=1.0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a=1;
		for(j=1;j<=i;j++) 
		{
		a=a*j;
		}
		e+=1/a;
	}
	printf("%.10f",e);
	return 0;
	 
 } 
