#include<bits/stdc++.h>
using namespace std;
int main()
{	

	int h,l,x,i,j;
	char c;
	while(cin>>h>>l>>c>>x)//ʵ��Ч�����������һ����Ϊ0ʱ��ֹ 
	{
	if(x==1)
	{
		for(i=1;i<=h;i++)//��ס��ӡ���ε�д��������ѭ�� 
		{
			for(j=1;j<=l;j++)
			{
				printf("%c",c);
			}
			cout<<endl;//����ÿ�������֮���� 
		}
	}
	else
	{
		for(i=1;i<=h;i++)
		{
			if(i==1||i==h)
			{
				for(j=1;j<=l;j++)
				{
				printf("%c",c);
				}
				cout<<endl;
			}
			else
			{
				cout<<c<<setw(l-1)<<c<<endl;//setw���ڿ��ƽ�����������λ������߲��ո� 
			}
		}
	}
		}
	return 0;
} 
