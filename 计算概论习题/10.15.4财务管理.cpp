#include<bits/stdc++.h>
using namespace std;
int main()
{
	double ave,a,sum=0;
	while(cin>>a)
	{
		sum+=a;
	}
	ave=sum/12;
	cout<<fixed<<setprecision(2);
	cout<<'$'<<ave; 
	return 0;
}
