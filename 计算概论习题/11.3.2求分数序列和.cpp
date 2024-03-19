#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];
int main()
{
	int i,n;
	double sum=0.0,de=1.0,nu=2.0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		sum+=nu/de; 
		double temp=nu;
		nu=nu+de;
		de=temp;
	} 
		printf("%.4lf\n",sum);
	return 0;
} 

