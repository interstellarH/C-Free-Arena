#include <stdio.h>
int main() 
{
 char str[5] = { 'z','q','s','l' };//four person's names//why 5 elements?
 int weight[4] = { 0 };
 int sum_wei[4] = { 0 };//the final weight array
 int i, j, h, k, t, p = 0;
 int temp = 0;
 char tep = '\0';//a temp to swap char str[5]
 for (i = 10; i <= 50; i=i+10) {
  weight[0] = i;
  for (j = 10; j <= 50; j=j+10) {
   weight[1] = j;
   if (weight[0] != weight[1])//every weight is not the same
   { 
    for (h = 10; h <= 50; h=h+10) {
      weight[2] = h;
      if (weight[0] != weight[2] && weight[1] != weight[2]) {
       for (k = 10; k <= 50; k=k+10) {
        weight[3] = k;
        if(weight[0]!=weight[3]&&weight[1]!=weight[3]&&weight[2]!=weight[3]&&
         weight[0]+weight[1]==weight[2]+weight[3]&&
         weight[0]+weight[3]>weight[1]+weight[2]
         &&weight[0]+weight[2]<weight[1])
         for (t = 0; t < 4; t++) {
          sum_wei[t] = weight[t];
         }

       }
      }

    }
   }
  }
 }
 for (t = 0; t < 4; t++) {
  for (p = 0; p < 4; p++) {
   if (sum_wei[t] > sum_wei[p]){//two variables change the position at the same time
    temp = sum_wei[t];
    sum_wei[t] = sum_wei[p];
    sum_wei[p] = temp;
    tep = str[t];
    str[t] = str[p];
    str[p] = tep;
   }
  }
 }
 for (t = 0; t < 4; t++) {
  printf("%c %d\n", str[t], sum_wei[t]);
  //'%c'->outputchar[i] '%s'->output the full char
 }
 return 0;
}



