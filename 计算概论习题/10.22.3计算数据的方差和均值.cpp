#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,D,E,sum=0,s2=0,a[10011];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a[i]=x;
		sum+=x;
	}
	E=sum/n;
	for(int i=0;i<n;i++)
	{
		s2+=(a[i]-E)*(a[i]-E);
	}
	D=s2/n;
	printf("%.5lf %.5lf",E,D);
	return 0;
} 
