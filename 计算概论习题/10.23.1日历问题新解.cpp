#include<iostream>
#include<iomanip>
using namespace std;//����������bug�����Լ���de������ 

int num_of_year(int year)//�Զ��庯��һ��Ҫ�����������⣡���� 
	{
		if((year%4==0&&year%100!=0)||year%400==0) return 365;//�����ж�Ҫ�μ����� 
		else return 364;
	}
int main()
{	
	int x,y;
	while(cin>>x&&x!=-1)//�����У�����-1Ҳ�����ȥ ��ֻҪ������x��ô���߼����ʽ��ֵ����1 
	{
		y=x;//֮��x�ᷢ���仯������Ҫ������ʼֵ 
		int n,Dayofweek=6,mon=1,day=1,year=2000;//��ѭ����ʱ��һ��Ҫע�������ʼ����λ�� 
		int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		while(x>num_of_year(year))
		{
			if((year%4==0&&year%100!=0)||year%400==0) x-=366;
			else x-=365;
			year++;
		}		
		if((year%4==0&&year%100!=0)||year%400==0)
		{
			for(int i=0;i<12;i++)//����һ��ʼд����1��12������ʹ�λ��Խ���� 
			{
				if(x>=b[i])
					{
						mon++;
						x-=b[i];
					}
				else break;//��֮ǰд����else day+=x;��������һ����ѭ��12�Σ�����ĳ��x<b[i]֮��day������ۼ� 
			}
			day+=x;
		}
		else
		{
			for(int i=0;i<12;i++)
			{
				if(x>=a[i])
				{
					mon++;
					x-=a[i];
				}
				else break;
			}
			day+=x;
		}
		//cout<<year<<'-'<<setfill('0')<<setw(2)<<mon<<'-'<<setfill('0')<<setw(2)<<day<<" ";
		printf("%d-%02d-%02d ",year,mon,day);//�ǲ��Ǳ��������ּ򵥺ܶ�ѽ	
	Dayofweek+=y%7;
	switch(Dayofweek)
	{
		case 6:cout<<"Saturday\n";break;
		case 7:cout<<"Sunday\n";break;
		case 8:cout<<"Monday\n";break;
		case 9:cout<<"Tuesday\n";break;
		case 10:cout<<"Wednesday\n";break;
		case 11:cout<<"Thursday\n";break;
		case 12:cout<<"Friday\n";break;
	}
	}
 } 
