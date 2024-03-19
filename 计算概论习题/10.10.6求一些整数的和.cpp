#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,n,Sn=0,An=0;
	cin>>a>>n;
	for(int i=1;i<=n;i++)
	{
		An=An*10+a;
		Sn+=An;
	}
	cout<<Sn; 
	return 0;
} 
