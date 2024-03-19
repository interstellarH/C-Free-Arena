#include <iostream> 
using namespace std;
int arr[100][100]; 
int main() {
    //只需要得到起始位置的点，和最后位置的点，即可算出可容纳几个255
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




