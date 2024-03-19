#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,m,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	 } 
	cin>>m;	
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		count++;
	 } 
	cout<<count;
	return 0;
} 
