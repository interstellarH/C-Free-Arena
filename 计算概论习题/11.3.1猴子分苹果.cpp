#include<iostream>
using namespace std;
int main()
{
	int m, n, k, i = 1, j;
	cin >> n >> k;
	while (1)
	{
		m = n * i + k;	
		for (j = 1; j <= n-1; j++)
		{
			if (m % (n-1) != 0) break;
			m = m * n/(n-1) + k;			
		}
		i++;
		if (j==n) break;//��һ�β�������ֹ����ʱѭ��������ֵ������Ҫ��ǰ���� 
	}
	cout << m;
	return 0;
}
