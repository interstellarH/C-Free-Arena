#include<iostream>
using namespace std;
int daysbetween(int y, int m, int day)//当发现两部分操作完全相同时，就写一个函数即可
{
	int i, j;//这些不变量放到里面定义
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	for (i = 1; i < y; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			day += 366;
		else
			day += 365;
	}
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)//一开始错点是月份这里忘了考虑闰年了
	{
		for (j = 0; j < m - 1; j++)
		{
			day += b[j];
		}
	}
	else
	{
		for (j = 0; j < m - 1; j++)
		{
			day += a[j];
		}
	}
	day += 1;//每个月的第一天与本年初的差值 
	return(day);//一定不要忘了写返回值
}
int main()
{
	int  n, i, j,days;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int y,m1,m2, day1=0, day2=0;
		cin >> y >> m1 >> m2;
		days= daysbetween(y, m1, day2) - daysbetween(y, m2, day1);
		if(days%7==0) cout << "YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}
