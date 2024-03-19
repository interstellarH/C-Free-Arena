#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int x,a[301],t=0,M=0,m=0;
	char c;
	while(cin>>x)
	{
		a[t]=x;
		t++;
		c=getchar();
		if(c=='\n')
		break;
	}
	for(int i=0;i<t;i++)
	{
		if(a[i]>M) 
		{
			m=M;
			M=a[i];
		}
		if(a[i]>m&&a[i]<M)
		{
			m=a[i];
		}
	}
	if(t==1||m==0) cout<<"No";
	else cout<<m; 
	return 0;
} 
