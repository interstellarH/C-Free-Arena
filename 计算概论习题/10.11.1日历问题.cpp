#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 
	int sum[12];
	sum[0]=31;
	for(int i=1;i<12;i++)
	{
		sum[i]=a[i]+sum[i-1];
	}
	int ra[12]={31,29,31,30,31,30,31,31,30,31,30,31}; 
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x,y,m,d,Dayofweek=6;
		
		cin>>x;
		y=x/365;
		x=x%365;
		
		if(x+1<=sum[0])
			{
				d=x+1;
				y+=2000;
				m=1; 
			}
			if(x+1>sum[0]&&x+1<=sum[1])
			{
				d=x+1-sum[0];
				y+=2000;
				m=2;
			}
			if(x+1>sum[1]&&x+1<=sum[2])
			{
				d=x+1-sum[1];
				y+=2000;
				m=3;
			}
			if(x+1>sum[2]&&x+1<=sum[3])
			{
				d=x+1-sum[2];
				y+=2000;
				m=4;
			}
			if(x+1>sum[3]&&x+1<=sum[4])
			{
				d=x+1-sum[3];
				y+=2000;
				m=5;
			}
			if(x+1>sum[4]&&x+1<=sum[5])
			{
				d=x+1-sum[4];
				y+=2000;
				m=6;
			}
			if(x+1>sum[5]&&x+1<=sum[6])
			{
				d=x+1-sum[5];
				y+=2000;
				m=7;
			}
			if(x+1>sum[6]&&x+1<=sum[7])
			{
				d=x+1-sum[6];
				y+=2000;
				m=8;
			}
			if(x+1>sum[7]&&x+1<=sum[8])
			{
				d=x+1-sum[7];
				y+=2000;
				m=9;
			}
			if(x+1>sum[8]&&x+1<=sum[9])
			{
				d=x+1-sum[8];
				y+=2000;
				m=10;
			}
			if(x+1>sum[9]&&x+1<=sum[10])
			{
				d=x+1-sum[9];
				y+=2000;
				m=11;
			}
			if(x+1>sum[10]&&x+1<=sum[11])
			{
				d=x+1-sum[10];
				y+=2000;
				m=12;
			}
		//	printf("%d-%d-%d ",y,m,d);
		
	Dayofweek+=x%7;
	switch(Dayofweek)
	{

		case 6:cout<<"Saturday\n";break;
		case 7:cout<<"Sunday\n";break;
		case 8:cout<<"Monday\n";break;
		case 9:cout<<"Tuesday\n";break;
		case 10:cout<<"Wednesday\n";break;
		case 11:cout<<"Thursday\n";break;
		case 12:cout<<"Friday\n";break;
	}
	}	
		

	return 0;
} 
