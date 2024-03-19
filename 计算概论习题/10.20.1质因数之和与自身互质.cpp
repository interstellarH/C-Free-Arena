#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[300],x,y,i,t=0,cnt=0,sum=0;
	cin>>x;
	y=x;
	int j=2;
	for(j=2;j*j<y;j++) 
	{
		while(x%j==0)
		{
			a[t]=j;
			t++;
			x/=j;
		}
	}
	if(x!=1) 
	{
		a[t]=x;t++;
	}	
	for(i=0;i<t;i++) //一个很小的点（i<t)写成了（i<=t),但是数组最后一个变量是a[t-1],而在未初始化时各位上的数字是随机的 
	{
		sum+=a[i];
	}
	while(1)//求最大公因数的模块，互质即为(a,b)=1 
	{
		int temp=y%sum;
		if(temp==0) break;
		else
		{
			y=sum;
			sum=temp;
		}
	}
	if(sum==1) cout<<"yes";
	else cout<<"no";
	return 0;
}
