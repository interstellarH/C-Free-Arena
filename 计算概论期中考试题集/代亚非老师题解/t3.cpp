#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	//��֪��һ����ȫ����6����С��6ֱ�����None. 
	if (n < 6)
	{
	    cout << "None." << endl;
	    return 0;
    }
    //��6��nö��ż������ÿ��+2 
	for (int i = 6; i <= n; i += 2)
	{
		//s����i������֮�ͣ���Ϊ���㱾������ֵΪ-i 
		int s = -i;
		//ö������ 
		for (int j = 1; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				//����������s���ۼӣ�ע����ȫƽ������� 
				s += j + i / j;
			    if (j * j == i)
			        s -= j;
		    }
		}
		//������ȫ����������� 
		if (s == i)
		    cout << s << ' ';
	}
	cout << endl;
	return 0;
}
