#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,mul=1,sum,x,y,i,cnt=0;
	cin>>n;
	int a0,b0;
	scanf("%d/%d",&a0,&b0);//当涉及特殊符号时，最方便的就是scanf 
	mul=b0;
	for(i=1;i<n;i++)
	{
		scanf("%d/%d",&a,&b);
		if(cnt==0)
		{
			mul*=b;
			sum=a0*b+b0*a;
			cnt=1;
		}
		else
		{
			mul*=b;
			sum=sum*b+mul/b*a;
		}
	} 
	x=sum;
	y=mul;
	while(1)//新求得的sum和mul是否互质  
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
	if(mul==1) printf("%d/%d",x,y);
	else 
	{
		x/=mul;
		y/=mul;
		if(y!=1)
		printf("%d/%d",x,y);
		else
		printf("%d",x);
	}
	return 0;
} 
