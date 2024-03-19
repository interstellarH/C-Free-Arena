#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j;
	cin>>t;
	string s[110],a;
	for(i=0;i<t;i++) 
	{
		cin>>n;
		for(j=0;j<n;j++)
		{
			cin>>s[j];
		}
		int len=s[0].length();	
		for(j=len;j>1;j--)
		{
			for(int k=0;k+j<=len;k++)
			{
				a=s[0].substr(k,j);
				cout<<a;
			}
		}
		
		 
	
	}
	return 0;
} 

