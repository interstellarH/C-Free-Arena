#include <iostream> 
using namespace std;
int arr[100][100]; 
int main() {
    //ֻ��Ҫ�õ���ʼλ�õĵ㣬�����λ�õĵ㣬������������ɼ���255
 int n,  ax = 0, ay = 0, bx = 0, by = 0;
 cin >> n;
 bool first = true;
 for (int i = 1; i <= n; i++) {
  for (int j = 1; j <= n; j++) {
   cin >> arr[i][j];
   if (arr[i][j] == 0) {
    if(first) {
     ax = i;
     ay = j;
     first = false;
    }
    bx = i, by = j;
   }
  } 
 }
 if (bx > ax && by > ay) {
  cout << (by - ay - 1) * (bx - ax - 1);
 } else {
  cout << 0;
 }
 return 0;
}




