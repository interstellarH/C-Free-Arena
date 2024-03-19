#include<bits/stdc++.h>
using namespace std;
int main()
{	

	int h,l,x,i,j;
	char c;
	while(cin>>h>>l>>c>>x)//实现效果，输入最后一个数为0时终止 
	{
	if(x==1)
	{
		for(i=1;i<=h;i++)//记住打印矩形的写法，两层循环 
		{
			for(j=1;j<=l;j++)
			{
				printf("%c",c);
			}
			cout<<endl;//这样每行输出完之后换行 
		}
	}
	else
	{
		for(i=1;i<=h;i++)
		{
			if(i==1||i==h)
			{
				for(j=1;j<=l;j++)
				{
				printf("%c",c);
				}
				cout<<endl;
			}
			else
			{
				cout<<c<<setw(l-1)<<c<<endl;//setw用于控制紧跟其后的数的位数（左边补空格） 
			}
		}
	}
		}
	return 0;
} 
