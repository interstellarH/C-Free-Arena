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
		if(a[i]==max&&cnt==0)//�ַ���һ���ͼ�����a[i]=max; 
		{
			printf("%d",b[i]);
			cnt=1;
		}
		else if(a[i]==max&&cnt==1)
		{
			if(b[i]!=temp)
			printf(",%d",b[i]);
			temp=b[i];//�������Ա���ͬһ�з������������ 
			//��������һ��д�����ٿ�һ�����飬һһ��Ӧ ���������������ֹ��ˣ��Ϳ��԰Ѷ�Ӧλ�üǳ�1
			//����ֻ���ж����λ���Ƿ�Ϊ1 
		} 
	} 
	return 0;
} 
