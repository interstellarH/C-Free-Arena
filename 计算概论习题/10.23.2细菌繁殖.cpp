#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,num1,num2,d1,d2,m1,m2,i,j,day1,day2;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	for(i=0;i<n;i++)
	{
		day1=0;//快气死啦，又是循环里面变量忘了清零 
		day2=0;
		cin>>m1>>d1>>num1>>m2>>d2;
		for(j=0;j<m1-1;j++)
		{
			day1+=a[j];
		}
		day1+=d1-1;
		for(j=0;j<m2-1;j++)
		{
			day2+=a[j];
		}
		day2+=d2-1;
		num2=num1*pow(2,(day2-day1));
		cout<<num2<<endl;
	}
	return 0;
}
