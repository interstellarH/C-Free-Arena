#include <iostream>
using namespace std;
int abs(int x) //绝对值函数
{
	return x >= 0 ? x : -x;
}
int main()
{
	int a[105][105], b[105][105];
	int ans = 2147483647, ax, ay;
	//ans记录当前最小值，ax,ay为取到最小值的矩阵的左上角在a中坐标
	int n, m, r, s;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cin >> r >> s;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < s; j++)
			cin >> b[i][j];
	//枚举C的左上角在A中坐标即可，同时为了满足题目的输出要求
	//注意枚举顺序先行后列
	for (int x = 0; x <= m - r; x++)
		for (int y = 0; y <= n - s; y++)
		{
			int t = 0;
			//计算匹配度并更新答案
			for (int i = 0; i < r; i++)
				for (int j = 0; j < s; j++)
					t += abs(a[x + i][y + j] - b[i][j]);
			if (ans > t)
			{
				ans = t;
				ax = x;
				ay = y;
			}
		}
	for (int i = ax; i < ax + r; i++) //输出矩阵C
	{
		for (int j = ay; j < ay + s; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}
	return 0;
}
