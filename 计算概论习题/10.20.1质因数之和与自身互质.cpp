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
	for(i=0;i<t;i++) //һ����С�ĵ㣨i<t)д���ˣ�i<=t),�����������һ��������a[t-1],����δ��ʼ��ʱ��λ�ϵ������������ 
	{
		sum+=a[i];
	}
	while(1)//�����������ģ�飬���ʼ�Ϊ(a,b)=1 
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
