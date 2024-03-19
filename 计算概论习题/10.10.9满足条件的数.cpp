#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,m,l,h,count=0;
	cin>>m;
	cin>>l>>h;
	for(int i=1;i<=m;i++)
	{
		cin>>a;
		if(a>=l&&a<=h)
		count++;
	} 
	cout<<count;
	return 0;
} 
