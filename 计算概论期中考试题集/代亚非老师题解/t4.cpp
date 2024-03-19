#include<iostream>
using namespace std;
int main()
{
	//存储每两个日期之间需要加的天数的常数数组，注意1月1号到1月13号是12天 
	int days[] = {12, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	int x;
	//x表示当前是星期(x+1)，这样取模计算方便 
	cin >> x;
	x--;
	for (int i = 0; i < 12; i++) //逐月计算即可 
    {
    	x = (x + days[i]) % 7;
    	if (x == 4) //判断是否是星期五，是则输出，注意月份是i+1 
    	    cout << i + 1 << endl;
	}
	return 0;
}
