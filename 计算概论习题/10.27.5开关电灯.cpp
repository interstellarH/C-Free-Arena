#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,k=2,t,a[1001]={0};
	cin>>n;
	while(k<=n)
	{
		for(i=1;k*i<=n;i++)
		{
			t=k*i-1;//һ��ʼ����д����t=k*i���˼�һ�����飩 
			if(a[t]==0) a[t]=1;
			else if(a[t]==1) a[t]=0;
		 } 
		k++;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1) cout<<i+1<<" ";
	}
	return 0;
} 
