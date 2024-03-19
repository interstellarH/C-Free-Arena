#include <iostream>
using namespace std;
int main()
{
	int n, m, a[105];
	cin >> n >> m;
	//用一个数组a[i]记录i号病人的类别编号，初始化编号即为其自己的编号
	for (int i = 1; i <= n; i++)
		a[i] = i;
	for (int i = 1; i <= m; i++)
	{
		char ch;
		int x, y;
		cin >> ch >> x >> y;
		if (ch == 'M') //若是合并操作
		{
			if (a[x] == a[y]) //若编号已经相同就无需修改
				continue;
			int t = a[y];
			//否则遍历a数组，将所有编号和y相同的病人编号都修改为x的编号
			//注意，不能只改y的编号,也不能在下面的循环里直接写if (a[j]==a[y])
			for (int j = 1; j <= n; j++)
				if (a[j] == t)
					a[j] = a[x];
		}
		else if (a[x] == a[y]) //否则是查询操作，直接判断编号是否相同并输出即可
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
