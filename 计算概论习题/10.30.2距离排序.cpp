#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct length
{
	int p1,p2;
	double d;
};
length len[10000];//结构体类型和数组名字千万不要重复，否则可能会有问题 

struct Point//为了建立多个量之间的对应关系要学会使用结构体 
{
	int x,y,z;
};//声明完之后 就有point这个类型了，再去定义 
Point point[101];

bool cmp(length a, length b) //因为一会sort要用，且是对length类型数组排序，则a,b的数据类型就是length
{
 	return a.d> b.d;  
}

int main()
{
	int n,i,j,num=0;//num是已经计算过的距离数 
	cin>>n;
	for(i=0;i<n;i++) cin>>point[i].x>>point[i].y>>point[i].z;//把各点的三个坐标读入 
	for(i=0;i<n-1;i++)//计算两点间距离 
		for(j=i+1;j<n;j++)//在这些边界条件的控制上一定要小心，不要惯性思维 
		{
			len[num].d=sqrt((point[i].x-point[j].x)*(point[i].x-point[j].x)
			+(point[i].y-point[j].y)*(point[i].y-point[j].y)
			+(point[i].z-point[j].z)*(point[i].z-point[j].z));
			len[num].p1=i;//记录第一个点 
			len[num].p2=j;//记录第二个点 
			num++; 
		}
	sort(len, len+num, cmp);//sort函数三个参数，前两个确定数组中排序的起止范围，最后一个不写是升序， 写个降序函数就是降序 
	for(i=0;i<num;i++)//i<num不是n啊，都不知道自己定义的量的含义了 
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",point[len[i].p1].x,point[len[i].p1].y,point[len[i].p1].z,point[len[i].p2].x,point[len[i].p2].y,point[len[i].p2].z,len[i].d);
	}	 
	return 0;
} 

