#include <iostream>
#include <queue>
using namespace std;
//这是直接使用STL的优先队列容器的方法，并不符合题目要求，但作为介绍。
priority_queue<int, vector<int>, greater<int>> q;
//声明一个小数优先的优先队列
int main()
{
	int n, m, x;
	char s[20];
	cin >> n;
	for (int i = 0; i < n; i++) //初始元素逐个入队
	{
		cin >> x;
		q.push(x);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> s;
		if (s[0] == 'A') //若是ADD，则入队
		{
			cin >> x;
			q.push(x);
		}
		else //否则是EXTRACT-MIN
		{
			if (q.empty()) //如果q为空，输出NULL
				cout << "NULL" << endl;
			else //否则输出队首（最小）元素，并弹出
			{
				cout << q.top() << endl;
				q.pop();
			}
		}
	}
	return 0;
}
