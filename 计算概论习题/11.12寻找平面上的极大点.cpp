#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,t=0;
	cin>>n;
	int x[101],y[101],p[101];
	for(i=0;i<n;i++) cin>>x[i]>>y[i];
	
	for(i=0;i<n;i++)
	{
		int cnt=0;
	//	for(j=0;j<n&&j!=i;j++) ������ֹ�����������д����ô��һ��ѭ��������ȥ ����Ϊ��һ��j==i
		for(j=0;j<n;j++) 
			if((x[i]>x[j])||(y[i]>y[j])) cnt++;					
				
		if(cnt==n-1) p[t++]=i;//��������浽��������Ϳ����ڴ�ѭ������֮����ͳһ����ˣ��ɲ��ҷŵ�������� 
	}
	
	for(j=0;j<t-1;j++)//ð�ݣ�����x�Ĵ�С����p�е������ 
	{
		for(int k=0;k<t-1-j;k++)
		if(x[p[k]]>x[p[k+1]]) swap(p[k],p[k+1]);
	}
		
	for(j=0;j<t;j++)
	{
		if(j!=0) cout<<',';
		printf("(%d,%d)",x[p[j]],y[p[j]]);	
	}
	return 0;
} 

