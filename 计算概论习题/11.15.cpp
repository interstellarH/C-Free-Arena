#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j;
	cin>>t;
	string s[110],a[110],b[110];
	for(i=0;i<t;i++) 
	{
		cin>>n;
		for(j=0;j<n;j++)
		{
			cin>>s[j];
		}
		int len=s[0].length();	
		int t=0;
		for(j=len;j>1;j--)
		{
			for(int k=0;k+j<=len;k++)
			{
				a[t]=s[0].substr(k,j);
				b[t]=a[t];//string�����ֱ���ø�ֵ�ţ� 
			    reverse(a[t].begin(),a[t].end());//ֱ�Ӷ�a������a�����仯����������Ҫ��a���b 
				t++;
			}
		}		
		int cnt=0;
		for(j=0;j<t;j++)	
		{
			for(int u=0;u<n;u++)
			{
				if((s[u].find(b[j])!=string::npos)||(s[u].find(a[j])!=string::npos)) 
				{
					cnt++;break;
				}									
			}
			if(cnt==n) 
			{
				cout<<a[j]<<endl;break;
			}
		}
		
	}
	return 0;
} 

