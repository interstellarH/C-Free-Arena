#include<bits/stdc++.h>
using namespace std;
int noluck(int n,int w)
{
	int x;
	x=n%7+w;
	if((w==1||w==2||w==3||w==4||w==5)&&x==5) return 1;
	else if((w==7||w==6)&&x==12) return 1;
	else return 0;
}
int main()
{
	int days=0,i,w,a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	cin>>w;
	days+=12;//特判一月 
	if(noluck(days,w)) cout<<1<<endl;
	days=12;
	for(i=1;i<12;i++)
	{
		days-=12;//这里一定要减，否则每次都多加一个12 
		days+=a[i-1];
		days+=12;
		if(noluck(days,w)) cout<<i+1<<endl;
	}
	return 0;
} 

