#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		int n,m,a[301];
		cin>>n>>m;
		if(n==0&&m==0) return 0;
		for(int i=1;i<=n;i++)
		{
			a[i]=1;
		}
		int t=0,cnt=0,out=0;

		while(1)//���鷢������ṹ�д�����ʱ��д���������һЩС������ 
		{
			t++;
			if(t==n+1) t=1;
			if (a[t]==1)
			{
				cnt++;
				if(cnt==m)
				{
					a[t]=0;
					out++;
					cnt=0;
				}
			} 
			if(out==n) 
			{
				cout<<t<<endl;//�����⣬ÿ�ζ�����endl	
				break;
			}
		}
	}
} 

