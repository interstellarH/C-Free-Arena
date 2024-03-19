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
		int p=0;
		for(j=len;j>=1;j--)
		{
			for(int k=0;k+j<=len;k++)
			{
				a[p]=s[0].substr(k,j);
				b[p]=a[p];//string类可以直接用赋值号； 
			    reverse(a[p].begin(),a[p].end());//直接对a操作，a发生变化，所以上面要把a存给b 
				p++;
			}
		}		
		//int cnt=0;不知道是第几次写错了！！！ 
		for(j=0;j<t;j++)	
		{
			int cnt=0; 
			for(int u=0;u<n;u++)
			{
				if(s[u].size()<a[j].size()) break; //防止子串比查找的那个字符串更长 
				if((s[u].find(b[j])!=string::npos)||(s[u].find(a[j])!=string::npos)) 
				{
					cnt++;break;//之前写了break，位置不对，这样u就没办法遍历了 
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

