#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,count=0;
	cin>>m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
//这是错误写法，输入数组一定要用循环cin>>a[100];就这个点错了两道题 
	for(int i=0;i<n;i++)
	{
		if(a[i]<=m)
		m=m-a[i];
		else
		count++;
	}
	cout<<count;
	return 0;
} 
