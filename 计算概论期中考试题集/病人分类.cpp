#include<bits/stdc++.h>
using namespace std;
char x[101][1000000]={0};

int f(char c,int a,int b)
{
	int t=1; 
	if(c=='M')
	{
		strcat(x[a],x[b]);
		strcpy(x[b],x[a]);		
	}
	
	else if(c=='Q')
	{
		if(!strcmp(x[a],x[b]))
		 cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
int main()
{
	int n,m,a,b;
	char c;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		x[i][0]=i;
	}
	for(int i=0;i<m;i++)
	{
		cin>>c>>a>>b;
		f(c,a,b);
	}
	return 0;
}
