#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,r,c;
	cin>>r>>c;
	double a[101][101];
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>a[i][j]; 				
	int n=(r>c)?((c+1)/2):((r+1)/2) ;
	for(i=0;i<n;i++)
	{
		int r1=i,r2=r-1-i;
		int c1=i,c2=c-1-i;
		if(r1==r2)
		{
			for(j=c1;j<=c2;j++) cout<<a[r1][j]<<endl;
		}
		else if(c1==c2)
		{
			for(j=r1;j<=r2;j++) cout<<a[j][c1]<<endl;
		}
		else
		{
			for(j=c1;j<c2;j++) cout<<a[r1][j]<<endl;
			for(j=r1;j<r2;j++) cout<<a[j][c2]<<endl;
			for(j=c2;j>c1;j--) cout<<a[r2][j]<<endl;
			for(j=r2;j>r1;j--) cout<<a[j][c1]<<endl;
			}
	}
	return 0;
}	
