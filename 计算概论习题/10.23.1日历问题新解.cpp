#include<iostream>
#include<iomanip>
using namespace std;//这个题的所有bug都是自己的de出来的 

int num_of_year(int year)//自定义函数一定要在主函数体外！！！ 
	{
		if((year%4==0&&year%100!=0)||year%400==0) return 365;//闰年判断要牢记于心 
		else return 364;
	}
int main()
{	
	int x,y;
	while(cin>>x&&x!=-1)//加特判，否则-1也会读进去 ，只要输入了x那么此逻辑表达式的值就是1 
	{
		y=x;//之后x会发生变化，所以要保留初始值 
		int n,Dayofweek=6,mon=1,day=1,year=2000;//有循环的时候一定要注意这个初始化的位置 
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
			for(int i=0;i<12;i++)//这里一开始写成了1到12，数组就错位且越界了 
			{
				if(x>=b[i])
					{
						mon++;
						x-=b[i];
					}
				else break;//我之前写的是else day+=x;问题在于一定会循环12次，那在某次x<b[i]之后，day会继续累加 
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
		printf("%d-%02d-%02d ",year,mon,day);//是不是比上面那种简单很多呀	
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
