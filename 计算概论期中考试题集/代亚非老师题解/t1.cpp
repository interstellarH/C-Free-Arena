#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 10; i < n; i++) //枚举判断每个小于n的数是否满足条件 
	{
		int x = i, s = 0; //s用于存储x各位之和 
		while (x) //每次循环将x的个位加到s中，然后x自己除以10 
		{
			s += x % 10;
			x /= 10;
		}
		if (i % s == 0) //判断是否能整除即可 
		    cout << i << endl;
	}
	return 0;
}
