#include <stdio.h>
#include <math.h>
using namespace std;
int day_diff(int year_start, int month_start, int day_start, int year_end, int month_end, int day_end)
{/*����������ڵ�0��3��1�յ�������������������*/
 int y2, m2, d2;
 int y1, m1, d1;
 m1 = (month_start + 9) % 12;/*�����Ƿ�������£������¼�����ٸ���*/
 y1 = year_start - m1/10;/*�����1�º�2���򲻰�����ǰ��*/
 d1 = 365*y1 + y1/4 - y1/100 + y1/400 + (m1*306 + 5)/10 + (day_start - 1);/*����ļ���+��ǰ�µ�3��1��֮�������
 ȫ���в���31���·ݵĸ���Ϊ5��306���������û��һ�ºͶ��µ�����+��ǰ�յ�����1�յļ������*/
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



