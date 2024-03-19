#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

// node_1,node_2�����㣬w�ǳ��� 
struct Length {
 int node_1, node_2;
 double w;
};
Length len[10005];
int num = 0; //������ľ������ 

struct Node {
 int x, y, z;
};
Node node[100];

//�жϱ�Ȩ�ش�С
bool cmp(Length a, Length b) {
 return a.w > b.w;  
}

int main() {
 int n;
 cin >> n;
 for (int i = 0; i < n; i++) {
  cin >> node[i].x >> node[i].y >> node[i].z;
 }
 //�������������룬����¼
 for (int i = 0; i < n; i++)
  for (int j = i + 1; j < n; j++) {
   len[num].w = sqrt((node[i].x - node[j].x) * (node[i].x - node[j].x) + 
    (node[i].y - node[j].y) * (node[i].y - node[j].y) + 
    (node[i].z - node[j].z) * (node[i].z - node[j].z));
   len[num].node_1 = i; //��¼��һ���� 
   len[num].node_2 = j; //��¼�ڶ�����
   num++;
  }
 sort(len, len + num, cmp);  //�Ծ�������
 for (int i = 0; i < num; i++) {
  printf("(%d, %d, %d) - (%d, %d, %d) = %.2f\n", node[len[i].node_1].x, node[len[i].node_1].y, node[len[i].node_1].z, 
   node[len[i].node_2].x, node[len[i].node_2].y, node[len[i].node_2].z,
   len[i].w);  
 }
 return 0;
}



