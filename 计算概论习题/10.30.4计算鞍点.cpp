#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,k,max,min,flagj,cnt;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		 	cin>>a[i][j];
	
	for(i=0;i<5;i++)
	{
		cnt=0;
		max=a[i][0];
		flagj=0;
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max) 
			{
				max=a[i][j];
				flagj=j;
			}
		}
		min=a[i][flagj];
		for(k=0;k<5;k++)
		{
			if(a[k][flagj]<min) break;			
		}

		if(k==6) 
		{
			cout<<i<<' '<<flagj<<' '<<min; 
			cnt=1;
		}
	}
	if(cnt==0) cout<<"not found";
	return 0;
} 

