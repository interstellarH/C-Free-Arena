#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

// node_1,node_2是两点，w是长度 
struct Length {
 int node_1, node_2;
 double w;
};
Length len[10005];
int num = 0; //已求出的距离个数 

struct Node {
 int x, y, z;
};
Node node[100];

//判断边权重大小
bool cmp(Length a, Length b) {
 return a.w > b.w;  
}

int main() {
 int n;
 cin >> n;
 for (int i = 0; i < n; i++) {
  cin >> node[i].x >> node[i].y >> node[i].z;
 }
 //依次求两点间距离，并记录
 for (int i = 0; i < n; i++)
  for (int j = i + 1; j < n; j++) {
   len[num].w = sqrt((node[i].x - node[j].x) * (node[i].x - node[j].x) + 
    (node[i].y - node[j].y) * (node[i].y - node[j].y) + 
    (node[i].z - node[j].z) * (node[i].z - node[j].z));
   len[num].node_1 = i; //记录第一个点 
   len[num].node_2 = j; //记录第二个点
   num++;
  }
 sort(len, len + num, cmp);  //对距离排序
 for (int i = 0; i < num; i++) {
  printf("(%d, %d, %d) - (%d, %d, %d) = %.2f\n", node[len[i].node_1].x, node[len[i].node_1].y, node[len[i].node_1].z, 
   node[len[i].node_2].x, node[len[i].node_2].y, node[len[i].node_2].z,
   len[i].w);  
 }
 return 0;
}



