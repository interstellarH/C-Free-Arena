#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x,y,i,j;
	cin>>a>>b;
	for(i=0,j=a-i;i<=a;i++,j--)//������ѭ����ʹ���������� 
	{
		if(i*2+j*4==b&&i+j==a)
		{
			x=i;
			y=j;
			break;
		}
	}
	cout<<x<<" "<<y; 
	return 0;
} 
