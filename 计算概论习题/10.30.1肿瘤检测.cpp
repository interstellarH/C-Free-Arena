#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[105][105],i,x,j,s=0,c=0;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>x;
			a[i][j]=x;
		}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]<=50) 
			{
				s++;
				if(i==0||i==n-1||j==0||j==n-1) c++;
				else if(a[i-1][j]>50||a[i+1][j]>50||a[i][j+1]>50||a[i][j-1]>50) c++;	
			}
		}
	printf("%d %d\n",s,c);
	return 0;
} 

