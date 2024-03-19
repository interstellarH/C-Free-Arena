#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,m;
	cin>>n;
	m=n+1;
	while(m%2==0)
	{
		m=m/2;
	}
	if(m==1) cout<<"YES";
	else cout<<"NO";
	return 0;
} 
