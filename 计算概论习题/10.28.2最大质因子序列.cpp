#include<bits/stdc++.h>
using namespace std;
int prime(int x)//һ���Ƚϼ����ж��������� 
{
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}

int main()
{
	int m,n,i,j,t=0,a[5000];
	cin>>m>>n;
	for(i=m;i<=n;i++)
	{
		for(j=i;j>=2;j--)
		{
			if(i%j==0&&prime(j)) 
			{
				a[t]=j;t++;break;
			}
		}		
	} 
	int cnt=0;
	for(i=0;i<t;i++)
	{
		if(cnt==0) 
		{
			cout<<a[i];cnt=1;
		}
		else printf(",%d",a[i]);
	}
	return 0;
} 




