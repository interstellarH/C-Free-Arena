#include<bits/stdc++.h>
using namespace std;
int main()
{
	double r,V;
	cin>>r;
	V=(4./3)*3.14159*r*r*r;//这个题的意义：使用除法时注意要把具体数字转换成浮点型 
	printf("%.3lf",V); 
	return 0;
}
