#include<iostream>
using namespace std;
int main()
{
	int num = 1;
	//读题，注意每个牌子被翻的次数就是其因子个数，故只有完全平方数会被翻奇数次
	//最后正面朝下，故计数并输出150以内的完全平方数即可。 
	while (num * num<=150)
	{
		//注意输出格式控制 
		if (num > 1)
		    cout << ' '; 
		cout << 'N' << num * num;
		num++;
	}
	//注意满足条件的完全平方数个数是num-1而不是num 
	cout << endl << num - 1<< endl;
	return 0;
}
