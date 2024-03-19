#include<bits/stdc++.h>
using namespace std;
int main()
{
	double num;
	while(cin>>num)
	{
		int n=0;//这些常量一定要放在循环内部，避免循环后带来的数值改变 
		double x1=21.0,x2=0;
		const double eps=1e-6;
		while(abs(x1-x2)>eps)
		{
			x2=x1;//此原理应该继续思考一下，理解这种方法 
			x1=0.5*(x1+num/x1);
			n++;
		}
	cout<<fixed<<setprecision(2);
	cout<<n<<" "<<x1<<endl;//无数次忘记打换行，注意看结果形式啊 
	}
	return 0;
}
