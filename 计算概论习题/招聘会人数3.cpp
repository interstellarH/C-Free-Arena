#include<iostream>
using namespace std;
int main()
{
	int x,y,z,cnt = 0, i = 0, j = 0, max = 0, t = 0, a[1000], b[1000], c[1001] = { 0 };
	while (cin>>x)//这应该是用字符输入最简便可行的写法了（调了十几次！） 
	{
		a[i] = x;i++;
		cnt++;// 之前这里还写了if(x!=','),但完全是多余的，首先逗号不会被存入int，会被getchar吃掉。其次如果某个x恰好是逗号的ASCII码，就出错了。 
		z=getchar();
		if(z=='\n') break;//不能只写一个getchar,you must use a variant to record and to judge whether to continue. 
	}
	while (cin>>y)
	{
		b[j]=y;j++;
		z=getchar();
		if(z=='\n') break;
	}
	for(t=0;t<cnt;t++)
		for (i = a[t]; i < b[t]; i++)
		{
			c[i]++;
		}
	for (i = 0; i < 1001; i++)
	{
		if (c[i] > max) max = c[i];
	}
	cout << cnt << " " << max;
	return 0;
}
