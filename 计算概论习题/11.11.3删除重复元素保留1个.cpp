#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,x;
	cin>>n;
	int s[100]={0},a[301];//bug1����Ȼд��char���͵ģ��ַ����������˶�д��˼ά������ 
	for(i=0;i<n;i++)//bug1��д��ѭ����û��i���˷� 
	{
		cin>>x;
		a[i]=x;
		s[x]++;	
	}	
	int cnt=0;
	for(i=0;i<n;i++)
	{	
		if(s[a[i]]>=1&&cnt==0)
		{
			cout<<a[i];			
			s[a[i]]=0;
			cnt=1;
		}
		else if(s[a[i]]>=1&&cnt==1)	//bug3�����ﻹֻ�ܻص��Ϸ��� 
		{
			cout<<','<<a[i];			
			s[a[i]]=0;
		}	
	}
	return 0;
} 

