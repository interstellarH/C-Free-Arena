#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct length
{
	int p1,p2;
	double d;
};
length len[10000];//�ṹ�����ͺ���������ǧ��Ҫ�ظ���������ܻ������� 

struct Point//Ϊ�˽��������֮��Ķ�Ӧ��ϵҪѧ��ʹ�ýṹ�� 
{
	int x,y,z;
};//������֮�� ����point��������ˣ���ȥ���� 
Point point[101];

bool cmp(length a, length b) //��Ϊһ��sortҪ�ã����Ƕ�length��������������a,b���������;���length
{
 	return a.d> b.d;  
}

int main()
{
	int n,i,j,num=0;//num���Ѿ�������ľ����� 
	cin>>n;
	for(i=0;i<n;i++) cin>>point[i].x>>point[i].y>>point[i].z;//�Ѹ��������������� 
	for(i=0;i<n-1;i++)//������������ 
		for(j=i+1;j<n;j++)//����Щ�߽������Ŀ�����һ��ҪС�ģ���Ҫ����˼ά 
		{
			len[num].d=sqrt((point[i].x-point[j].x)*(point[i].x-point[j].x)
			+(point[i].y-point[j].y)*(point[i].y-point[j].y)
			+(point[i].z-point[j].z)*(point[i].z-point[j].z));
			len[num].p1=i;//��¼��һ���� 
			len[num].p2=j;//��¼�ڶ����� 
			num++; 
		}
	sort(len, len+num, cmp);//sort��������������ǰ����ȷ���������������ֹ��Χ�����һ����д������ д�����������ǽ��� 
	for(i=0;i<num;i++)//i<num����n��������֪���Լ���������ĺ����� 
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",point[len[i].p1].x,point[len[i].p1].y,point[len[i].p1].z,point[len[i].p2].x,point[len[i].p2].y,point[len[i].p2].z,len[i].d);
	}	 
	return 0;
} 

