#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,j;
	cin>>n; 
	for(j=0;j<n;j++)
	{
		int x,a,i;
		cin>>x;
		a=x;//把x存到另一个变量中，因为之后会发生改变
		cout<<x<<'=';//免去了之后输出的时候的麻烦
		for(i=2;i*i<a;i++)//至多有一个大于平方根的质因子，比如15 
		{
			while(x%i==0)//有可能某个因子反复出现，所以要用while循环 
			{
				cout<<i;
				x/=i;
				if(x!=1) cout<<"*";//假如恰好可被分解，那么最后x会被除成1 
			}
		} 
		if(x!=1) cout<<x;//假如有一个大于平方根的质因子就输出 
		cout<<endl;//每次循环结束不要忘了换行 
	}//而且这种写法可以包括输入质数的情况，无须特判 
	return 0;
 } 
