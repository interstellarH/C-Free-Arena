#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	char n='n';
	scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0){
		printf("%d %d %d",3,5,7);}
	else if(a%3==0&&a%5==0&&a%7!=0){
		printf("%d %d",3,5);}
	else if(a%3==0&&a%5!=0&&a%7==0){
		printf("%d %d",3,7);}
	else if(a%3!=0&&a%5==0&&a%7==0){
		printf("%d %d",5,7);}
	else if(a%3==0&&a%5!=0&&a%7!=0){
		printf("%d",3);
	}
	else if(a%3!=0&&a%5==0&&a%7!=0){
		printf("%d",5);
	}
	else if(a%3!=0&&a%5!=0&&a%7==0){
		printf("%d",7);
	}
	else{
		printf("%c",n);//如果你要这样写，n必须在初始化时赋值，否则输出空格 
	}//但更快捷的方式是printf("n") 
	return 0;
 } 
