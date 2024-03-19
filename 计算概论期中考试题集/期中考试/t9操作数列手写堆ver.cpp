#include <iostream>
using namespace std;
int n, m, x;
int h[200005];
char s[20];
//本代码存在bug，但堆的大题实现思路无误
//本题所描述的，实际上是一个“堆”数据结构。
//堆是一颗二叉树，且满足父亲结点的值总是大于/小于儿子节点的值
//手写实现一颗小根堆如下
int hnode(int j) //对结点j进行维护使其满足堆的性质，且若产生交换，返回交换的节点编号
{
	if (2 * j + 2 >= n)
	{
		if (h[j] > h[2 * j + 1])
		{
			swap(h[j], h[2 * j + 1]);
			return 2 * j + 1;
		}
	}
	else
	{
		if (h[j] > h[2 * j + 1] || h[j] > h[2 * j + 2])
		{
			if (h[2 * j + 1] < h[2 * j + 2])
			{
				swap(h[j], h[2 * j + 1]);
				return 2 * j + 1;
			}
			else
			{
				swap(h[j], h[2 * j + 2]);
				return 2 * j + 2;
			}
		}
	}
	return -1;
}
void heapify() //初始化堆
{
	for (int j = n / 2 - 1; j >= 0; j--)
		hnode(j);
}
void add(int x) //向堆中添加元素
{
	h[n++] = x;
	int t = n - 1;
	while (t)
	{
		t = (t - 1) / 2;
		hnode(t);
	}
}
void extract() //从堆中删去最小元素
{
	h[0] = h[n - 1];
	n--;
	int t = 0;
	while (t != -1 && 2 * t + 1 < n)
		t = hnode(t);
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) //读入并初始化堆
		cin >> h[i];
	heapify();
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> s;
		if (s[0] == 'A') //若为add，则加入堆中
		{
			cin >> x;
			add(x);
		}
		else //否则是extract-min
		{
			if (n == 0) //若n=0，则堆为空，输出null
				cout << "NULL" << endl;
			else //否则输出h[0]即为最小值，并删除最小值
			{
				cout << h[0] << endl;
				extract();
			}
		}
	}
	return 0;
}
