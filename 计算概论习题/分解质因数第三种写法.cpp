#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[300],x,n,i,cnt,t,c;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		//֮ǰzycд�˸�a[300]={0};�������Ȼ�Ǵ�ģ�����Խ���ˣ����ҳ�ʼ��ֻ�����ڶ������ʱ���� 
		t=0;
		cnt=0; 
		int y=x,j=2;
		while(j*j<=y)
		{
			if(x%j==0) //��һ����д��׸���ˣ��������д���ܽ� 
			{
				cnt=1; 
				a[t]=j;
				t++;
				x/=j;
			    while(x%j==0)//��ʵ����ͬ�������飬��ȫ����ͳһ���� 
				{
					x=x/j;
					a[t]=j;
					t++;
				}
				j++;	
			} 
			else j++;
		}	
		if(cnt==1)//˵������ѭ�� 
		{
		printf("%d=%d",y,a[0]);
		for(c=1;c<t;c++) printf("*%d",a[c]);//�����ұ���Ҳ����i������ʵ�ǲ��Եģ���Ϊ�����Ǹ�i��ѭ���ﰡ 
		if(x!=1) printf("*%d",x);
		}
		else	printf("%d=%d",y,y);//����ľ���������������ѭ�� 
		cout<<endl;
		printf("%d %d\n",i,n);
	}
	return 0;
}
