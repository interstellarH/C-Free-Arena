#include<iostream>
using namespace std;
int main()
{
	int num = 1;
	//���⣬ע��ÿ�����ӱ����Ĵ������������Ӹ�������ֻ����ȫƽ�����ᱻ��������
	//������泯�£��ʼ��������150���ڵ���ȫƽ�������ɡ� 
	while (num * num<=150)
	{
		//ע�������ʽ���� 
		if (num > 1)
		    cout << ' '; 
		cout << 'N' << num * num;
		num++;
	}
	//ע��������������ȫƽ����������num-1������num 
	cout << endl << num - 1<< endl;
	return 0;
}
