#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,x,t=0,h=1,temp=0;
	char c;
	cin>>n;
	int a[300],b[300];
	while(cin>>x)
	{
		a[t]=x;
		b[t]=h;
		t++;
		c=getchar();
		if(c=='\n')
		h++;
	}
	int max=0;
	for(i=0;i<t;i++)
	{
		if(a[i]>max) max=a[i];
	}
	cout<<max<<endl;
	
	int cnt=0;
	for(i=0;i<t;i++)
	{
		if(a[i]==max&&cnt==0)//又犯了一个低级错误，a[i]=max; 
		{
			printf("%d",b[i]);
			cnt=1;
		}
		else if(a[i]==max&&cnt==1)
		{
			if(b[i]!=temp)
			printf(",%d",b[i]);
			temp=b[i];//这样可以避免同一行反复输出的问题 
			//这里是另一种写法，再开一个数组，一一对应 ，如果这个行数出现过了，就可以把对应位置记成1
			//这样只需判断这个位置是否为1 
		} 
	} 
	return 0;
} 
