#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[20000],b[101]={0},i,n,x,t=0,cnt=0;//�ٽ�һ������������¼������Ƿ������ 
	cin>>n;
	while(cin>>x)
	{
		a[t]=x;
		t++;
	}
	for(i=0;i<n;i++)
	{
		if(b[a[i]]==0&&cnt==0)
		{
		printf("%d",a[i]);
		b[a[i]]++;
		cnt=1;	
		}	
		if(b[a[i]]==0&&cnt==1)
		{
		printf(" %d",a[i]);//�������������һ���ո񶼲��� 
		b[a[i]]++;	
		}
	}
	return 0;
} 
