#include<bits/stdc++.h>
using namespace std;
int l[501][501],r[501][501],n[501][501]={0};
int main()
{
	int a,b,c,i,j,k;
	cin>>a>>b>>c;
	for(i=0;i<a;i++)
		for(j=0;j<b;j++)
		{
			cin>>l[i][j];
		}
	for(i=0;i<b;i++)
		for(j=0;j<c;j++)
		{
			cin>>r[i][j];
		}

	for(i=0;i<a;i++)
		for(j=0;j<c;j++)
			for(k=0;k<b;k++)//��һ��ʼ����д����j++������ѭ���ر����ױ��� 
				n[i][j]+=l[i][k]*r[k][j];

	for(i=0;i<a;i++)
	{
		int cnt=0;
		for(j=0;j<c;j++)
		 {
		 	if(cnt==0)
			{
				cout<<n[i][j];cnt=1;
			}
			else cout<<" "<<n[i][j];
		 }
		cout<<endl;	
	}
		
	return 0;
} 

