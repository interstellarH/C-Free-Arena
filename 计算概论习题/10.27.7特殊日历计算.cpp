#include<bits/stdc++.h>
using namespace std;
int run(int year)
{
	if((year%4==0&&year%100!=0)||year%400==0) return 29;
	else return 28;
}

int main()
{
	int n,hour,minute,second,day,month,year,i,j,k;
	int h,min,s,d,mon,y;  
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	cin>>n;
	for(k=0;k<n;k++)
	{
		int sum_sec=0,sum_day=0;//��һ������û����ÿ��ѭ���г�ʼ�������� 
		scanf("%d:%d:%d %d.%d.%d\n",&hour,&minute,&second,&day,&month,&year);
		sum_sec=3600*hour+60*minute+second;
		sum_sec/=0.864;//Ϊʲô�ǳ��ԣ���Ϊ��������һ����������࣬���������������Ҫ���� 
		h=sum_sec/10000;
		min=(sum_sec%10000)/100;
		s=(sum_sec%10000)%100;

		for (i = 2000; i < year; i++)
		{
			sum_day+=365+run(i)-28;
		}
		a[1]=run(year);
		for (j = 0; j < month-1; j++)
		{
			sum_day += a[j];
		}
		sum_day+=day-1;
		
		y=sum_day/1000;
		mon=(sum_day%1000)/100;
		d=(sum_day%1000)%100;
		mon++;d++;
		
		printf("%d:%d:%d %d.%d.%d\n",h,min,s,d,mon,y);
	}
	return 0;
} 
