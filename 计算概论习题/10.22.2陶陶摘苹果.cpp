#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i,x,th,cnt=0;
	for(i=0;i<10;i++)
	{
		cin>>x;
		a[i]=x;
	}
	cin>>th;
	for(i=0;i<10;i++)
	{
		if(a[i]<=th+30)
		cnt++;
	}
	return 0;
} 
