#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,i;
	cin>>T;
	for(i=0;i<T;i++)
	{
		int n,j;
		cin>>n;
		int a[n]={0};
		int max=-1,min=100000;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			if(a[j]>max) max=a[j];
			if(a[j]<min) min=a[j];//����һ���Զ������ж���ɵ�û��Ҫ������ 
		}
		int x,sum,t=0;
		int b[10000]={0};//���������b[]̫С�ˣ�����̨���������ر��Ӧ�ø���100000�Ʋ⣬����Ҫ����100000������ 
		for(x=min;x<=max;x++)
		{
			sum=0;
			for(j=0;j<n;j++)
			{
				sum+=abs(x-a[j]);
			}
			b[t]=sum;t++;
		}
		int m=10000000,k;
		for(k=0;k<t;k++)
		{
			if(b[k]<m) m=b[k];
		}
		cout<<m<<endl;
	}
	return 0;
}
