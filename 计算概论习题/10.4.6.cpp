#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],b,i,j,k;//ѧ���������� 
	float sum=0;
	cin>>k;
	for(j=1;j<=k;j++)//һ��Ҫ�ǵö���ѭ������ 
	{
	for(i=0;i<10;i++){
		cin>>b;
		a[i]=b;
	}
	sum=28.9*a[0]+32.7*a[1]+45.6*a[2]+78*a[3]+35*a[4]+86.2*a[5]+27.8*a[6]+43*a[7]+56*a[8]+65*a[9];
	printf("%.2f\n",sum);//��ϰ�ߣ��ύǰ��һ�����Ҫ�� 
	}
	return 0;
}
