#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=n-1;i>=0;i--)
	{
		int j,k=0;
		j=i;
		while(j>0)
		{
			k=k*10+j%10;
			j/=10;
		}
		if(i==k) 
		{
			cout<<i;break;
		}
	}	
	return 0;
}
