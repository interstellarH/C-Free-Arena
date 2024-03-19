#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,i;
	float num,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		sum=sum+a;
	}
	num=sum/n;
	printf("%.2f",num);
	return 0;
 } 
