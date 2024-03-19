#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,i;
	cin>>T;
	for(i=0;i<T;i++)
	{
		int n,j;
		cin>>n;
		int a[n]={0};
		int max=-1,min=100000;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			if(a[j]>max) max=a[j];
			if(a[j]<min) min=a[j];//这里一次性都可以判断完成的没必要分两次 
		}
		int x,sum,t=0;
		int b[10000]={0};//问题在这里，b[]太小了，而后台测试数据特别大，应该根据100000推测，至少要开个100000的数组 
		for(x=min;x<=max;x++)
		{
			sum=0;
			for(j=0;j<n;j++)
			{
				sum+=abs(x-a[j]);
			}
			b[t]=sum;t++;
		}
		int m=10000000,k;
		for(k=0;k<t;k++)
		{
			if(b[k]<m) m=b[k];
		}
		cout<<m<<endl;
	}
	return 0;
}
