#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n, z;
 cin >> n;
 for (z = 1;z <= n;z++)
 {
  int ss = 0;
  int m, i, j, k;
  cin >> m;
  string c[110];
  cin >> c[0];
  int min = c[0].length();//�ڶ����ַ�����ʱ����ж�һ����̵ĳ��ȣ�֮���������ȿ�ʼȡ�Ӵ� 
  for (i = 1;i <= m - 1;i++)//�ô�����Ҳ�����ҵ����ĸ�������Ӵ��� 
  {
   cin >> c[i];
   if (c[i].length() < min)
    min = c[i].length();
  }

  for (i = min;i >= 1;i--)
  {
   int delta = 0;
   for (j = 0;j <= c[0].length() - i;j++)
   {
    int count = 0;
    string a, b;//�����￪һ���ֲ��������Ͳ��ð������Ӵ��������¼�����ˣ�Ҳ���ÿ���ά���飩 
    a = c[0].substr(j, i);//����һ���ݼ��ĳ���i������һ���Ӵ�����¼���Ӵ��ķ��򣬾Ϳ��Ա���ȽϹ�����ÿ���������ж�Ҫ����
    b = a;
    reverse(b.begin(), b.end());
    for (k = 1;k <= m - 1;k++)
    {
     if (c[k].find(a) != string::npos || c[k].find(b) != string::npos)
     {
      count++;
      break;
     }
    }
    if (count == m - 1)
    {
     cout << i << endl;
     delta++;
     break;
    }
   }
   if (delta != 0)
    break;//����i�����Ѿ��ҵ�jλ�ÿ�ʼ���Ӵ������������case�Ͳ���Ҫ���������ˣ���Ϊi�ݼ���
  }
 }
}
