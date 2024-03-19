#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,x,a[101]={0};
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		a[x]++;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==0) cout<<i<<endl;
	}
	return 0;
}
