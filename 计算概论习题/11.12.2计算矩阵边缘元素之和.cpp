#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,m,n,a[100][100];
	cin>>k;
	for(int u=0;u<k;u++)
	{
		cin>>m>>n;
		int i,j;
		for(i=0;i<m;i++)
			for( j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		if(m==1&&n==1)
		{
			cout<<a[0][0];
		}
		else
		{
			int sum=0;
			for( j=0;j<n-1;j++)
				sum+=a[0][j];
			for( i=0;i<m-1;i++)
				sum+=a[i][n-1];
			for( j=n-1;j>0;j--)
				sum+=a[m-1][j];
			for( i=m-1;i>0;i--)
				sum+=a[i][0];
			cout<<sum<<endl;
		}		
	} 
	return 0;
} 

