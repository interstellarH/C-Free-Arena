#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		int cnt=0;
		while(x>0)
		{
			cnt+=x/5;
			x/=5;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
