#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[30]={0},b[100]={0},c,num;//a是这个字符出现的次数，b用于记录是否出现过 
	int i,j,t=1;
	while((c=cin.get())!='\n')
	{
		if(c>='A'&&c<='Z')
		{
			if(b[c]!=0) a[b[c]]++;
			else if (b[c]==0)
			{ 
				a[t]++;//这个麻烦了很多，但在写它的过程中也锻炼了自己的聪明才智 
				b[c]=t;//比如这里之前只写的是b[c]=1; 
				t++;
			}
		}
		else if(c>='a'&&c<='z')
		{
			c-=32;
			if(b[c]!=0) a[b[c]]++;
			else if(b[c]==0) 
			{
				a[t]++;
				b[c]=t;
				t++;
			}
		}
	}
	
	int max=0,m=0,m_i=0,max_i=0;
	for(i=1;i<=26;i++)
	{
		if(a[i]>max) 
		{
			m=max;
			max=a[i];
			m_i=max_i;
			i=max_i;
		}
		if(a[i]<max&&a[i]>m) 
		{
			m=a[i];
			m_i=i;
		}
	}
	int min=0;
	for(j=65;j<=90;j++)
	{
		if(b[j]==m_i) min=j;//就差最后这一步，这里实际上建立起了一一对应的关系 
	}
	printf("%c+%c:%d",min,min+32,m);
	return 0;
}
