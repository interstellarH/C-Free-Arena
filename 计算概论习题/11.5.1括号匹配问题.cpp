#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		char s[200];
		int a[110],ans[110]={0};//һ��Ҫ�ڿ�ʼд����������������ڸ�ʲô�� 
	
		int m=0;
		cin>>s;
		int l=strlen(s);
		for(int j=0;j<l;j++)
		{
			if(s[j]=='(') 
			{
				
				a[m]=j;
				ans[j]=-1;
				m++;	
			}
			
			else if(s[j]==')') //�Ⱥ��ִ���� 
			{
				if(m>0)
				{
					m--;
					ans[a[m]]=0;	
				}
				else ans[j]=1;
			}
			
		}
		cout<<s<<endl;
		for(int j=0;j<l;j++)
		{
			if(ans[j]==0) cout<<' ';//��һ��ʼ����д����a[j]�ָĳ�s[j] 
			else if(ans[j]==1) cout<<'?';
			else if(ans[j]==-1)cout<<'$';
		}
		cout<<endl;//����ÿ��ѭ���������� 
	}
 } 
