#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 10; i < n; i++) //ö���ж�ÿ��С��n�����Ƿ��������� 
	{
		int x = i, s = 0; //s���ڴ洢x��λ֮�� 
		while (x) //ÿ��ѭ����x�ĸ�λ�ӵ�s�У�Ȼ��x�Լ�����10 
		{
			s += x % 10;
			x /= 10;
		}
		if (i % s == 0) //�ж��Ƿ����������� 
		    cout << i << endl;
	}
	return 0;
}
