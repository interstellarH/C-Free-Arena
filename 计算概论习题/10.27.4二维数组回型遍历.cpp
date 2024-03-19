#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,r,c,cnt,flag=1;//数组越界了，问题出在哪里 
	cin>>r>>c;
	cnt=r*c;
	double a[r][c];
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>a[i][j]; 
			
	while(1)
	{
		for(i=flag-1,j=flag-1;j<=c-flag-1;j++)
		{
			cout<<a[i][j]<<endl;
			cnt--;
			if(cnt==0) return 0;
		}
		for(i=flag-1,j=c-flag;i<=r-flag-1;i++)	
		{
			cout<<a[i][j]<<endl;
			cnt--;
			if(cnt==0) return 0;
		}
		for(i=r-flag,j=c-flag;j>=flag;j--)
		{
			cout<<a[i][j]<<endl;
			cnt--;
			if(cnt==0) return 0;
		}
		for(i=r-flag,j=flag-1;i>=flag;i--)
		{
			cout<<a[i][j]<<endl;
			cnt--;
			if(cnt==0) return 0;
		}
		flag++;
	} 
}	
