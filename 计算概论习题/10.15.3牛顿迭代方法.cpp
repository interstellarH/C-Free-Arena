#include<bits/stdc++.h>
using namespace std;
int main()
{
	double num;
	while(cin>>num)
	{
		int n=0;//��Щ����һ��Ҫ����ѭ���ڲ�������ѭ�����������ֵ�ı� 
		double x1=21.0,x2=0;
		const double eps=1e-6;
		while(abs(x1-x2)>eps)
		{
			x2=x1;//��ԭ��Ӧ�ü���˼��һ�£�������ַ��� 
			x1=0.5*(x1+num/x1);
			n++;
		}
	cout<<fixed<<setprecision(2);
	cout<<n<<" "<<x1<<endl;//���������Ǵ��У�ע�⿴�����ʽ�� 
	}
	return 0;
}
