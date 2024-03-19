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
  int min = c[0].length();//在读入字符串的时候就判断一下最短的长度，之后从这个长度开始取子串 
  for (i = 1;i <= m - 1;i++)//好处在于也不用找到底哪个是最短子串了 
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
    string a, b;//在这里开一个局部变量，就不用把所有子串及逆序记录下来了（也不用开二维数组） 
    a = c[0].substr(j, i);//对于一个递减的长度i拷贝下一个子串并记录该子串的反序，就可以避免比较过程中每个其他序列都要反序
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
    break;//对于i长度已经找到j位置开始的子串可以满足这个case就不需要继续进行了（因为i递减）
  }
 }
}
