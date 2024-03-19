#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,i;
	for(i=1;i<=4;i++)
	{
		cin>>a>>b;
		cout<<fixed<<setprecision(i);
		cout<<a/b<<endl;
	}
	cin>>a>>b;
	cout<<fixed<<setprecision(5)<<a/b;
	return 0;
} 
