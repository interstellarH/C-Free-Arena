#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, R;
	int x[1005];
	//本题的贪心策略如下：先将所有士兵按位置排序，然后从左往右扫描。
	//每碰到一个未被观察之石覆盖的士兵，就为其选择其右边的一个士兵放置观察之石
	//选择方法如下：选择该士兵右边，与其距离≤R的所有士兵中，与其距离最远的那个
	//这样能够使得该士兵“恰好”被覆盖，最大化观察之石的作用
	while (1)
	{
		cin >> R >> n;
		if (n == -1)
			break;
		for (int i = 0; i < n; i++)
			cin >> x[i];
		sort(x, x + n); //位置排序
		int ans = 0, i = 0; //ans记录已放置的观察之石数量，i用于遍历士兵位置
		while (i < n)
		{
			//每发现一个未被覆盖的士兵，就要放置一颗观察之石
			ans++;
			//l记录当前士兵编号，i继续向右扫描，直到下一个士兵和l的距离大于R
			int l = i, m;
			while (i < n - 1 && x[i + 1] - x[l] <= R)
				i++;
			//这样i就是上述的士兵l右边，与其距离≤R的所有士兵中，与其距离最远的那个
			//将这个i记为m，记为放置观察之石的士兵位置。
			m = i;
			//i继续向右扫描，跳过所有和m距离≤R的士兵，这些士兵已被覆盖
			while (i < n && x[i] - x[m] <= R)
				i++;
		}
		cout << ans << endl;
	}
	return 0;
}
