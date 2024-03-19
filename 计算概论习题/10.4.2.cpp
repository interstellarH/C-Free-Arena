#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b;
	cin>>a>>b;
	printf("%g",fmod(a,b));//两个浮点数相除不可以用% ，这里是fmod函数 
	return 0;
}
