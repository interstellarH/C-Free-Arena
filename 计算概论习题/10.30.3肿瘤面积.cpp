#include<bits/stdc++.h>
using namespace std; 
int a[1001][1001];
int main()
{
	int i,j,n,x,ai,aj,bi,bj;
	//之前把a数组定义成局部变量时程序直接就结束了，为什么如果使用静态数组来表示图片数据，需要将该数组定义成全局变量。 
	bool first=true;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>x;
			a[i][j]=x;
		}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				if(first)
				{
					ai=i;aj=j;
				}
				bi=i;bj=j;first=false;
			}
		}
	if(ai+1<bi&&aj+1<bj) cout<<(bi-ai-1)*(bj-aj-1);
	else cout<<0;
	return 0;
} 

