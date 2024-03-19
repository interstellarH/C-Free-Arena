#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,r,c,k;
	cin>>r>>c;
	int a[r][c];
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>a[i][j];
	for(k=0;k<r+c;k++)
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				if(i+j==k)
					cout<<a[i][j]<<endl;
	return 0;
} 
