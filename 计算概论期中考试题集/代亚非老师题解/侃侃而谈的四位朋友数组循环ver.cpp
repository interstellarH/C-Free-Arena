#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int l[7], num[5]; 
	//l[0],l[1]ö�ټ׵����ԣ�l[2],l[3]�ң��Դ����ƣ�������
	//ö�ٵ�ѭ������������Ϊ��B�������� 
	for (l[0] = 1; l[0] < 4; l[0]++)
	    for (l[1] = l[0] + 1; l[1] <= 4; l[1]++)
	        for (l[2] = 1; l[2] < 4; l[2]++)
	            for (l[3] = l[2] + 1; l[3] <= 4; l[3]++)
	                for (l[4] = 1; l[4] < 4; l[4]++)
	                    for (l[5] = l[4] + 1; l[5] <= 4; l[5]++)
	                        for (l[6] = 1; l[6] <= 4; l[6]++)
	                        {
	                        	memset(num, 0, sizeof(num));
	                        	//����ÿ�����Ի������ 
								for (int i = 0; i < 7; i++)
								    num[l[i]] ++;
								//flag1�ж�����B�Ƿ����� 
								bool flag1 = false;
								for (int i = 1; i <= 4; i++)
								    if (num[i] >= 3)
									{
										flag1 = true;
										break;
									}
								//flag2�ж�����C�Ƿ����� 
								bool flag2 = (l[1] == 4 && l[2] != 2 && l[3] != 2 && l[6] != 4);
								//flag3�ж�����D�Ƿ����㣬��ѭ������д���߼����ʽ 
								bool flag3 = false;
								for (int i = 2; i < 4; i++)
								    for (int j = 4; j < 6; j++)
								        if (l[i] == l[j])
								            flag3 = true;
								for (int i = 0; i < 2; i++)
								    for (int j = 4; j < 6; j++)
								        if (l[i] == l[j])
								        {
								            flag3 = false;
								            break;
										}
								flag3 = (flag3 && l[4] != l[6] && l[5] != l[6]);
								//flag4�ж�����E�Ƿ����㣬��ѭ������д���߼����ʽ 
								bool flag4 = true;
								for (int i = 0; i < 6; i += 2)
								    if (l[i] == 3 && l[i + 1] == 4)
								    {
								    	flag4 = false;
								    	break;
									}
								//��������������� 
								if (flag1 && flag2 && flag3 && flag4)
								{
									for (int i = 0; i < 6; i += 2)
									    cout << l[i] << ' ' << l[i + 1] << endl;
									cout << l[6] << endl;
								}
							}
	return 0;
}
