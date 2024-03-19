#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,t=0;
	cin>>n;
	int x[101],y[101],p[101];
	for(i=0;i<n;i++) cin>>x[i]>>y[i];
	
	for(i=0;i<n;i++)
	{
		int cnt=0;
	//	for(j=0;j<n&&j!=i;j++) 这里终止条件如果这样写，那么第一次循环都进不去 ，因为第一次j==i
		for(j=0;j<n;j++) 
			if((x[i]>x[j])||(y[i]>y[j])) cnt++;					
				
		if(cnt==n-1) p[t++]=i;//如果把它存到新数组里，就可以在大循环结束之后再统一输出了，可不敢放到这个里面 
	}
	
	for(j=0;j<t-1;j++)//冒泡，根据x的大小重排p中点的坐标 
	{
		for(int k=0;k<t-1-j;k++)
		if(x[p[k]]>x[p[k+1]]) swap(p[k],p[k+1]);
	}
		
	for(j=0;j<t;j++)
	{
		if(j!=0) cout<<',';
		printf("(%d,%d)",x[p[j]],y[p[j]]);	
	}
	return 0;
} 

