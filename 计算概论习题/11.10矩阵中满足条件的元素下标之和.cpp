#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,max,min,i,j,sum_i=0,sum_j=0;
	int a[31][31];
	cin>>m>>n>>min>>max;
	for(i=0;i<m;i++) 
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]>=min&&a[i][j]<=max) 
			{
				sum_i+=i;
				sum_j+=j;
			}
		}
	cout<<sum_i<<' '<<sum_j;
	return 0;
} 

