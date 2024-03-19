#include<iostream>
using namespace std;
int main()
{
	int n, k, i = 1, j;
	cin >> n >> k;
    bool flag=true;
	while (1)
	{
		
		int m = n * i + k;	
		for (j = 1; j <= n-1; j++)
		{
			if (m % (n-1) != 0) 
			{
				flag=false;
				break;
			}
			m = m * n/(n-1) + k;			
		}
		i++;
		if (flag)//如果flag=1说明就没有进入那个循环 
		{
			cout<< m;
			break;
		}
	return 0;
	}
} 
