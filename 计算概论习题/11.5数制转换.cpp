#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t=0,a,b;
	long sum=0; //表示中间转换成的10进制数 
	char c[1000],d[1000];
	cin>>a>>c>>b;//这里c代表这个字符数组的地址，第一位 
	int len=strlen(c);//*****
	int k=len-1;//一会进行展开的时候要用 
	for(i=0;i<len;i++)
	{
		if(c[i]>='0'&&c[i]<='9') t=c[i]-'0';
		else if(c[i]>='A'&&c[i]<='Z') t=c[i]-'A'+10;
		else if(c[i]>='a'&&c[i]<='z') t=c[i]-'a'+10;//大小写字母要分开处理 
		sum+=t*pow(a,k);
		k--;		
	}
	len=0;//其实也可以开一个新的变量
	if(sum==0) cout<<0;//处理输入为0的情况 
	else
	{
		while(sum>0)//最后sum一定会变成0 
		{
			t=sum%b;
			sum/=b;
			if(t>=0&&t<=9) d[len]=t+'0';
			else d[len]=t-10+'A';
			len++;
		}
		for(i=len-1;i>=0;i--) cout<<d[i];//这里一定是逆序输出 
	}
	
	return 0;
}
