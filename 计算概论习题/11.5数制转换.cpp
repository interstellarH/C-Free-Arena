#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t=0,a,b;
	long sum=0; //��ʾ�м�ת���ɵ�10������ 
	char c[1000],d[1000];
	cin>>a>>c>>b;//����c��������ַ�����ĵ�ַ����һλ 
	int len=strlen(c);//*****
	int k=len-1;//һ�����չ����ʱ��Ҫ�� 
	for(i=0;i<len;i++)
	{
		if(c[i]>='0'&&c[i]<='9') t=c[i]-'0';
		else if(c[i]>='A'&&c[i]<='Z') t=c[i]-'A'+10;
		else if(c[i]>='a'&&c[i]<='z') t=c[i]-'a'+10;//��Сд��ĸҪ�ֿ����� 
		sum+=t*pow(a,k);
		k--;		
	}
	len=0;//��ʵҲ���Կ�һ���µı���
	if(sum==0) cout<<0;//��������Ϊ0����� 
	else
	{
		while(sum>0)//���sumһ������0 
		{
			t=sum%b;
			sum/=b;
			if(t>=0&&t<=9) d[len]=t+'0';
			else d[len]=t-10+'A';
			len++;
		}
		for(i=len-1;i>=0;i--) cout<<d[i];//����һ����������� 
	}
	
	return 0;
}
