#include<iostream>
using namespace std;
int daysbetween(int y, int m, int d, int day)//当发现两部分操作完全相同时，就写一个函数即可
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
	day += d;
	return(day);//一定不要忘了写返回值
}
int main()
{
	int sy, sm, sd, ey, em, ed, day1=0, day2=0, n, i, j;
	cin >> sy >> sm >> sd;
	cin >> ey >> em >> ed;
	n = daysbetween(ey, em, ed, day2) - daysbetween(sy, sm, sd, day1);
	cout << n;
	return 0;
}
