#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	char str[110][110],start[110],end[110];
	int t=0;
	while((scanf("%s",str[t]))!='\n')
	{
		scanf("%s",str[t]); 
		t++;
	}
	cin>>start;
	cin>>end;
	bool flag=true;
	for(int i=0;i<t;i++)
	{
		if(strcmp(str[i],start)==0)
		{
			cout<<end;
			flag=false;
		}
		else 
		{
			cout<<str[i];
			flag=false;
		}
		if(flag) cout<<start;
	}
	return 0;
} 

