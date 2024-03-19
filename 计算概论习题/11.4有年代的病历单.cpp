#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	char s[1001][20],s1[1001][20];
	for(i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<n;i++)
	{
		int l=strlen(s[i]);
		for(j=0;j<l;j++)
		{
			char c=s[i][l-1-j]
			if(c>='A'&&c<='Z')
			{
				c+='a'-'A';
				c+=3;
				if(c>'z') c-=26;
			}
			else if(c>='a'&&c<='z')
			{
				c+='A'-'a';
				c+=3;
				if(c>'Z') c-=26;
			}
			s1[i][j]=c;
		}
		char temp[1001];
		for(i=1;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(strcmp(s1[j],s[j+1])>0)
				{
					strcpy(temp=s1[j]);
					strcpy(s1[j]=s[j]);
					strcpy(s1[j+1],temp);
				
				}
			}
		}
	}
} 
