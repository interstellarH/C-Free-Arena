#include <stdio.h>
#include <math.h>
using namespace std;
int day_diff(int year_start, int month_start, int day_start, int year_end, int month_end, int day_end)
{/*计算给定日期到0年3月1日的天数，相减求天数间隔*/
 int y2, m2, d2;
 int y1, m1, d1;
 m1 = (month_start + 9) % 12;/*日期是否大于三月；与三月间隔多少个月*/
 y1 = year_start - m1/10;/*如果是1月和2月则不包括当前年*/
 d1 = 365*y1 + y1/4 - y1/100 + y1/400 + (m1*306 + 5)/10 + (day_start - 1);/*闰年的计算+当前月到3月1日之间的天数
 全年中不是31天月份的个数为5，306是正常年份没有一月和二月的天数+当前日到该月1日的间隔天数*/
 m2 = (month_end + 9) % 12;
 y2 = year_end - m2/10;
 d2 = 365*y2 + y2/4 - y2/100 + y2/400 + (m2*306 + 5)/10 + (day_end - 1);
 return (d2 - d1);
}
int main()
{int sy, sm, sd, ey, em, ed;
scanf("%d %d %d \n%d %d %d", &sy, &sm, &sd, &ey, &em, &ed);
printf("%d\n", day_diff(sy,sm,sd,ey,em,ed));
return 0;
}



