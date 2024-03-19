#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,max_i,min_i;
	double a[301],sum=0,ave,max,min; 
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	max=0;min=a[0];
	min_i=0;max_i=0;//如果这个不初始化，且第一个数据就是最小的，那就会出现min_i根本不赋值的情况 
	for(i=0;i<n;i++)
	{
		if(a[i]>max) {max=a[i];max_i=i;}
		if(a[i]<min) {min=a[i];min_i=i;}
	}
	ave=(sum-max-min)/(n-2)*1.0;
	double Max=0.0; 
	for(i=0;i<n;i++)
	{
		if(i!=max_i&&i!=min_i)
		{
			if(Max<fabs(a[i]-ave)) Max=fabs(a[i]-ave);
		}
	}
	printf("%.2lf %.2lf",ave,Max);
	return 0;
} 

