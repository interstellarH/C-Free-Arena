#include<bits/stdc++.h>
using namespace std;
char s[510];
int check(int x,int y)
{
	int r=x;int t=y;
	while(r<t)
	{
		if(s[r]!=s[t]) return 0;
		r++;t--;
	}
	for(int i=x;i<=y;i++)
	{
		cout<<s[i];
	}
	cout<<endl;
	return 0;
} 
int main()
{
	cin.getline(s,510);
	int len=strlen(s);
	for(int i=1;i<=len-1;i++)
		for(int j=0;j<=len-1-i;j++)
			check(j,j+i);//����Ҫ��i��Ȼ����һ����������Ҫ������ʼ����ֹ���� 
			
	return 0;
} 

