#include<iostream>
using namespace std;
int main()
{
	int m, n, k, i = 1, j;//��ȫû��Ҫ����cnt 
	cin >> n >> k;
	while (1)
	{
		m = n * i + k;
		if (m % (n-1) == 0) //�����е��ظ��ˡ��������������������˳�� 
		{
		for (j = 1; j <= n-1; j++)
		{
			if (m % (n-1) != 0) break;//����˳��̫��Ҫ�ˣ���֮ǰ�����д������һ��֮�󣬾ͻ���� 
			m = m * n/(n-1) + k;

		}
		}
		i++;
		if (j==n) break;
	}
	cout << m;
	return 0;
}
