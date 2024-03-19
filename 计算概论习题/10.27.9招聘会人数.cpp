#include<iostream>
using namespace std;
int main()
{
	int cnt = 0, i = 0, j = 0, max = 0, t = 0, a[1000] = { 0 }, b[1000] = { 0 }, c[1001] = { 0 };
	char x, y;
	while (cin.get(x)&&x!='\n')
	{
		if (x != ',') a[i] = a[i] * 10 + int(x-'0');
		else if (x == ',') { cnt++; i++; }
		getchar();
	}
	while (cin.get(y)&&y!='\n')
	{
		if (y != ',') b[j] = b[j] * 10 + int(y-'0');
		else if (y == ',') j++;
		getchar();
	}
	for (i = a[t]; i < b[t]; i++)
	{
		c[i]++;
		t++;
	}
	for (i = 0; i < 1001; i++)
	{
		if (c[i] > max) max = c[i];
	}

	cout << cnt + 1 << " " << max;
	return 0;
}
