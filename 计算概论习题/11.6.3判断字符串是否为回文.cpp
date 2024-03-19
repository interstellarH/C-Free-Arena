#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[110]={0},a[110]={0};
	int i;
	cin>>s;
	int len=strlen(s);
	for(i=0;i<len;i++)
	{
		a[i]=s[len-1-i];
	}
	if(!strcmp(s,a)) cout<<"yes";
	else cout<<"no";
	return 0;
} 
//还有其他写法哦 
