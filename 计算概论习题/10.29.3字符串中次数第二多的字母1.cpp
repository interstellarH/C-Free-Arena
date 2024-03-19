#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100]={0};//a[]用于记录每个字母出现次数，下标就是字母对应的ASCII码 
	char x,c[500],num;//c[]用于记录原始字符串，是一个字符数组 
	int i,t=0;
	while((x=cin.get())!='\n')
	{	
		if(x>=65&&x<=90)//其实完全没有必要记下来ASCII码，直接用'A'代替 
		{
			a[x]++;
			c[t]=x;t++;
		}
		else if(x>=97&&x<=122)
		{
			x-=32;//直接转化成大写字母 
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
	for(i=0;i<t;i++)//按照原字符串顺序遍历就可以输出最先满足条件的字母 
	{
		if(a[c[i]]==m) //之前这里又犯了一个犯过的错误，c[i]写成c[t]了 
		{
		min=c[i];
		break;
		}
	} 
	
	printf("%c+%c:%d",min,min+32,m);
	return 0;
}
