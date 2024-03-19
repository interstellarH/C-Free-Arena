#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d,e;
	cin>>a>>b>>c>>d; 
	e=1.1*a+1.2*b+22.5*c+8.8*d;
	if(e>1000) cout<<"OVER";
	else if(e<600) cout<<"UNDER";
	else cout<<"FINE";
	return 0;
} 
