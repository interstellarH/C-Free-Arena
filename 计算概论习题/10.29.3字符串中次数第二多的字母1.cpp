#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100]={0};//a[]���ڼ�¼ÿ����ĸ���ִ������±������ĸ��Ӧ��ASCII�� 
	char x,c[500],num;//c[]���ڼ�¼ԭʼ�ַ�������һ���ַ����� 
	int i,t=0;
	while((x=cin.get())!='\n')
	{	
		if(x>=65&&x<=90)//��ʵ��ȫû�б�Ҫ������ASCII�룬ֱ����'A'���� 
		{
			a[x]++;
			c[t]=x;t++;
		}
		else if(x>=97&&x<=122)
		{
			x-=32;//ֱ��ת���ɴ�д��ĸ 
			a[x]++;
			c[t]=x;t++;
		}	
	}
	
	int max=0,m=0;
	for(i=65;i<=90;i++)
	{
		if(a[i]>max) 
		{
			m=max;
			max=a[i];
		}
		if(a[i]<max&&a[i]>m) m=a[i];
	}
	
	char min=0;
	for(i=0;i<t;i++)//����ԭ�ַ���˳������Ϳ����������������������ĸ 
	{
		if(a[c[i]]==m) //֮ǰ�����ַ���һ�������Ĵ���c[i]д��c[t]�� 
		{
		min=c[i];
		break;
		}
	} 
	
	printf("%c+%c:%d",min,min+32,m);
	return 0;
}
