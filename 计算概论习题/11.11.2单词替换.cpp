#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s[101],a,b;
	char c; 
	int t=0;
	while(1)
	{		
		cin>>s[t++];
		c=getchar();
		if(c=='\n') break;		
	}
	cin>>a;
	cin>>b;
	for(int i=0;i<t;i++)
	{
		if(s[i]==a) cout<<b;
		else cout<<s[i];
		if(i<t-1) cout<<' '; //����Ӷ��ŵķ��������ܱ�֤���һ�����������
	}
	return 0;
} 

