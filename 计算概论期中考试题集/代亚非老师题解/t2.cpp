#include<iostream>
using namespace std;
int main()
{
	int T, n;
	cin >> T;
	while (T--)
	{
		//分析可知，n!末尾0的个数，即为n!的质因子中5的幂次
		//计算公式为ans = [n/5] + [n/5^2] + [n/5^3]  ……这里[]表示向下取整
		//ans存储答案，循环计算即可 
		cin >> n;
		int ans = 0; 
		while (n)
		{
			ans += n / 5;
			n /= 5;
		}
		cout << ans <<endl;
	}
	return 0;
}
