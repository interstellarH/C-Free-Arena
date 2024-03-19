#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,mul=1,sum=0,b,x,y,j=0;
	cin>>n;
	int a[2n];
	for(int i=1;i<=n;i++)
	{
		while(true)
		{
		b=getchar();
		if(b=='\n') break;
		if(b!='/')
		{
		a[j]=b-'0';
		j++;
		}		
		}
	}
	
	for(int i=1;i<=2n-1;i+=2)
	{
		mul*=a[i];
	}
	for(int i=0;i<=2n-2;i+=2)
	{
		sum+=a[i]*mul/a[i+1];
	}
	x=sum;
	y=mul;
	
	while(1)
	{
		int t=sum%mul;
		if(t==0)
		{
			break;
		}
		else
		sum=mul;
		mul=t;
	}
	if(mul==1) printf("%d/%d",x,y)
	else 
	{
		x/=mul;
		y/=mul;
		printf("%d/%d",x,y);
	}
	return 0;
}
