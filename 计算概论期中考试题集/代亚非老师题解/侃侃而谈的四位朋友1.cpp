#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a1,a2,a3,a4,a5,a6,a7; 
	//a1,a2枚举甲的语言,a3,a4乙，以此类推，且升序
	//由于条件C甲会日语，故必有a2=4
	a2 = 4; 
	//为了保持升序，注意枚举范围 
	for (a1 = 1; a1 <= 2; a1++) //注意条件E，甲会日语，故不会法语 
	    for (a3 = 1; a3 <= 3; a3++)
	        for (a4 = a3 + 1; a4 <= 4; a4++)//a4不能再从一开始循环了 
	        {
	        	if (a3 == 2 || a4 == 2) //条件C，乙不会英语 
	        	    continue;
	        	if (a3 == 3 && a4 == 4) //条件E，不能同时会日语法语 
				    continue;
				for (a5 = 1; a5 <= 3; a5++)
				    for (a6 = a5 + 1; a6 <= 4; a6++) 
					{
						if (a5 == 3 && a6 == 4) //条件E，不能同时会日语法语
						    continue;
						for (a7 = 1; a7 <= 3; a7++) //条件C，丁不会日语 
						{
							//注意至此条件ACE均已满足
							//flag1判断条件B是否满足 
							bool flag1 =  ((a1 == 1) + (a2 == 1) + (a3 == 1) + (a4 == 1) + (a5 == 1) + (a6 == 1) + (a7 == 1)) >= 3
							           || ((a1 == 2) + (a2 == 2) + (a3 == 2) + (a4 == 2) + (a5 == 2) + (a6 == 2) + (a7 == 2)) >= 3
							           || ((a1 == 3) + (a2 == 3) + (a3 == 3) + (a4 == 3) + (a5 == 3) + (a6 == 3) + (a7 == 3)) >= 3
							           || ((a1 == 4) + (a2 == 4) + (a3 == 4) + (a4 == 4) + (a5 == 4) + (a6 == 4) + (a7 == 4)) >= 3;
							//flag2判断条件D是否满足 
							bool flag2 = (a1 != a5 && a1 != a6 && a2 != a5 && a2 != a6)
							          && (a5 != a7 && a6 != a7)
							          && (a3 == a5 || a3 == a6 || a4 == a5 || a4 == a6);
							//如果都满足就输出
							if (flag1 && flag2)
							{
							    cout << a1 << ' ' << a2 << endl;
							    cout << a3 << ' ' << a4 << endl;
							    cout << a5 << ' ' << a6 << endl;
							    cout << a7 << endl;	
							} 
					    }
					} 
			}
	return 0;
}
