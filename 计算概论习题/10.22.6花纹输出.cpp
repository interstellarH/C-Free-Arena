#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
	int n,i,m;
	cin>>n;
	for(i=1;i<(n+1)/2;i++)
	{
		m=(n-1)/2;
		for(j=)
		cout<<'$'<<setw(m)<<setfill()<<setw(n-2m)<<setfill('*')<<endl;
		m++;
	} 
	for(i=(n+1)/2;i<=n;i++)
	{
		m=(n-1)/2;
		cout<<'$'<<setfill()<<setw(m)<<setfill('*')<<setw(n-2m)<<endl;
		m--;
	}
	return 0;
} 
