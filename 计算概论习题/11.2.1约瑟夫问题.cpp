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

		while(1)//建议发现整体结构有大问题时重写，否则会有一些小点遗忘 
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
				cout<<t<<endl;//老问题，每次都忘了endl	
				break;
			}
		}
	}
} 

