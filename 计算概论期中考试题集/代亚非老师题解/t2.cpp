#include<iostream>
using namespace std;
int main()
{
	int T, n;
	cin >> T;
	while (T--)
	{
		//������֪��n!ĩβ0�ĸ�������Ϊn!����������5���ݴ�
		//���㹫ʽΪans = [n/5] + [n/5^2] + [n/5^3]  ��������[]��ʾ����ȡ��
		//ans�洢�𰸣�ѭ�����㼴�� 
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
