#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[20000],b[101]={0},i,n,x,t=0,cnt=0;//再建一个数组用来记录这个数是否输出过 
	cin>>n;
	while(cin>>x)
	{
		a[t]=x;
		t++;
	}
	for(i=0;i<n;i++)
	{
		if(b[a[i]]==0&&cnt==0)
		{
		printf("%d",a[i]);
		b[a[i]]++;
		cnt=1;	
		}	
		if(b[a[i]]==0&&cnt==1)
		{
		printf(" %d",a[i]);//编程网格里多输出一个空格都不行 
		b[a[i]]++;	
		}
	}
	return 0;
} 
