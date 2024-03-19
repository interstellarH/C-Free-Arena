#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M,k,i,j=0;
	cin>>k;
	for(i=1;i<=k;i++)
	{
		cin>>N>>M;
		for(j=1;j<M;j++)
		{
			if(N%j==0&&N%(M-j)==0)
			{	
			cout<<j;
			break;
			}
		}
		if(j==M) 
		cout<<"-1";
	}
	return 0;
}
