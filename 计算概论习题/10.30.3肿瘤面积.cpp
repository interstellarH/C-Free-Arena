#include<bits/stdc++.h>
using namespace std; 
int a[1001][1001];
int main()
{
	int i,j,n,x,ai,aj,bi,bj;
	//֮ǰ��a���鶨��ɾֲ�����ʱ����ֱ�Ӿͽ����ˣ�Ϊʲô���ʹ�þ�̬��������ʾͼƬ���ݣ���Ҫ�������鶨���ȫ�ֱ����� 
	bool first=true;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>x;
			a[i][j]=x;
		}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				if(first)
				{
					ai=i;aj=j;
				}
				bi=i;bj=j;first=false;
			}
		}
	if(ai+1<bi&&aj+1<bj) cout<<(bi-ai-1)*(bj-aj-1);
	else cout<<0;
	return 0;
} 

