#include<iostream>
using namespace std;
int main()
{
	int x,y,z,cnt = 0, i = 0, j = 0, max = 0, t = 0, a[1000], b[1000], c[1001] = { 0 };
	while (cin>>x)//��Ӧ�������ַ�����������е�д���ˣ�����ʮ���Σ��� 
	{
		a[i] = x;i++;
		cnt++;// ֮ǰ���ﻹд��if(x!=','),����ȫ�Ƕ���ģ����ȶ��Ų��ᱻ����int���ᱻgetchar�Ե���������ĳ��xǡ���Ƕ��ŵ�ASCII�룬�ͳ����ˡ� 
		z=getchar();
		if(z=='\n') break;//����ֻдһ��getchar,you must use a variant to record and to judge whether to continue. 
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
