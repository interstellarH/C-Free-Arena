#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,n; 
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>n;
		int a[n];
		
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int sum=0;
		for(int j=0;j<n;j++)
		{
			sum+=abs(a[j]-a[n/2]);
		}
		cout<<sum<<endl;
	}
	return 0;
} 

