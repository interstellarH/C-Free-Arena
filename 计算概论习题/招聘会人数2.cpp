#include<iostream>
using namespace std;
int main()
{
	int cnt = 0, i, j , max = 0, t = 0, a[1000] = { 0 }, b[1000] = { 0 }, c[1001] = { 0 };
	char x[1001], y[1001];
	while (cin.getline(x,1001,'\n'))
	{
		for(i=0;x[i]!='\0';i++)
		{
			if (x[i]!= ',') a[i] = a[i] * 10 + x;
			else if (x == ',') { cnt++; i++; }
		}	
	}
	
	while (cin.getline(y,1001,'\n'))
	{
		for(j=0;y[j]!='\0';j++)
		{
			if (y[j] != ',') b[j] = b[j] * 10 + y;
			else if (y == ',') j++;
		}
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
