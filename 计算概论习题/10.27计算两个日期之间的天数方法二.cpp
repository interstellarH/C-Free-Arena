#include<iostream>
using namespace std;
int daysbetween(int y, int m, int d, int day)//�����������ֲ�����ȫ��ͬʱ����дһ����������
{
	int i, j;//��Щ�������ŵ����涨��
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	for (i = 1; i < y; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			day += 366;
		else
			day += 365;
	}
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)//һ��ʼ������·��������˿���������
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
	return(day);//һ����Ҫ����д����ֵ
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
