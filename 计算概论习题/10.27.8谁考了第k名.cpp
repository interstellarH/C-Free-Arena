#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,x,i,n,a[100];
	double b[100],temp,y;//һ��ʼ�ֹ��Եض�����ˣ�int������ 
	cin>>n>>k;
	for(i=0;i<n;i++) 
	{
		cin>>x>>y;
		a[i]=x;
		b[i]=y;
	}
	int j;
	for(i=0;i<n;i++) //һ���ر����ص����Ⱑ���Ҷ�û����ʶ��Ҫ����ֻ�ǰ��ո�����˳������ 
		for(j=0;j<n-i-1;j++)//ð����������� 
		{
			if(b[j]<b[j+1])
			{
				temp=b[j];	b[j]=b[j+1];	b[j+1]=temp;
				temp=a[j];	a[j]=a[j+1];	a[j+1]=temp;				
			}
		}
	printf("%d %g",a[k-1],b[k-1]); 
	return 0;
} 
