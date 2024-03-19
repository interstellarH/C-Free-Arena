#include <iostream>
using namespace std;
int main()
{
	int n, x;
	bool a[105] = {0}; //bool数组，a[i]记录数字i是否出现过
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		//边读入数字边更新数组a
		cin >> x;
		a[x] = 1;
	}
	//最后遍历数组a输出未出现过的数即可
	for (int i = 1; i <= n; i++)
		if (!a[i])
			cout << i << endl;
	return 0;
}
