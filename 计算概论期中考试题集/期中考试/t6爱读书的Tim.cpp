#include<iostream>
using namespace std;
int main()
{
	int a[100005];
	bool read[100005] = {0};
	//bool数组read[i]记录第i页是否已读
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	    cin >> a[i];
	int ans = 0; //存储答案
	//逐天模拟看书的过程
	for (int i = 1; i <= n; i++)
		if (!read[i]) //如果发现一页没读过，则当天读这页
		{
			ans++; //天数加一
			int t = i; //t用于从i开始，遍历当天需要读的所有页码
			//直到t遇到的页码不依赖别的页(a[t]==t)或依赖的页已经读过时，循环停止
			while (a[t] > t && !read[a[t]]) 
			{
				read[t] = 1; //将第t页标记为已读
				t = a[t]; //去读第t页依赖的那页
			}
			read[t] = 1; //循环结束时t所指向的页也被读了，也要更新
		}
	cout << ans <<endl;
	return 0;
}
