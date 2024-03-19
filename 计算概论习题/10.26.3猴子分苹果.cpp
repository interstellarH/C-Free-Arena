#include<iostream>
using namespace std;
int main()
{
	int m, n, k, i = 1, j;//完全没必要定义cnt 
	cin >> n >> k;
	while (1)
	{
		m = n * i + k;
		if (m % (n-1) == 0) //这里有点重复了——乃至误导了下面的条件顺序 
		{
		for (j = 1; j <= n-1; j++)
		{
			if (m % (n-1) != 0) break;//条件顺序太重要了，我之前把这个写在了下一条之后，就会错误 
			m = m * n/(n-1) + k;

		}
		}
		i++;
		if (j==n) break;
	}
	cout << m;
	return 0;
}
