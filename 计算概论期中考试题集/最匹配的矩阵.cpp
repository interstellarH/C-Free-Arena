#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,s,r,a[101][101],b[101][101];
	cin>>m>>n;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>r>>s;
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
			cin>>b[i][j];
		}
	}

	int min_i[10000],min_j[10000];//bug,几个数组都开的太小了，没有分析题目的数据情况，一定要想最极端的情况啊 
	int t=0;
	int min[10000]={0};
	for(i=0;i<m-r+1;i++)
	{
		for(j=0;j<n-s+1;j++)
		{
			int sum=0;
			for(int x=i;x<i+r;x++)
			{
				for(int y=j;y<j+s;y++)
				{
					sum+=abs(a[x][y]-b[x-i][y-j]);					
				} 
			}
			min[t]=sum;
			min_i[t]=i;
			min_j[t]=j;
			t++;
		}
	}
	int zuixiao=1000000;//一开始也开的太小了 
	int k,K;
	for(k=0;k<t;k++)
	{
		if(min[k]<=zuixiao)
		{
			zuixiao=min[k];
		}
	}
	
	for(k=0;k<t;k++)
	{
		if(min[k]==zuixiao) 
		{
			K=k;break;
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
			cout<<a[min_i[K]+i][min_j[K]+j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
