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
//���Ǵ���д������������һ��Ҫ��ѭ��cin>>a[100];���������������� 
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
