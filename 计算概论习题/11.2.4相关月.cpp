#include<iostream>
using namespace std;
int daysbetween(int y, int m, int day)//�����������ֲ�����ȫ��ͬʱ����дһ����������
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
	day += 1;//ÿ���µĵ�һ���뱾����Ĳ�ֵ 
	return(day);//һ����Ҫ����д����ֵ
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
