#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	//已知第一个完全数是6，故小于6直接输出None. 
	if (n < 6)
	{
	    cout << "None." << endl;
	    return 0;
    }
    //从6到n枚举偶数，故每次+2 
	for (int i = 6; i <= n; i += 2)
	{
		//s计算i的因子之和，因为不算本身，赋初值为-i 
		int s = -i;
		//枚举因子 
		for (int j = 1; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				//能整除就向s中累加，注意完全平方数情况 
				s += j + i / j;
			    if (j * j == i)
			        s -= j;
		    }
		}
		//满足完全数条件就输出 
		if (s == i)
		    cout << s << ' ';
	}
	cout << endl;
	return 0;
}
