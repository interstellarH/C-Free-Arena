#include<bits/stdc++.h>
using namespace std;
int main()
{
	double e=1,f=1;
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f*=i;
		e+=1/f;
	}
	cout<<fixed<<setprecision(4)<<e;
	return 0;
} 
