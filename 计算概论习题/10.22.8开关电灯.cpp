#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[1001]={0};
	cin>>n;
	for(j=2;j<n;j++)//Ҫ��Ҫ�Ӵ�����ѽ 
		for(i=j;i<n;i+=j)
		{
			a[i]=1;//��η�ת�� 
		}
		
	for(i=1;i<n;i++)
	{
		if(a[i]==1)
		cout<<i<<" ";
	}
	
	return 0;
} 
