#include<string>//from lyt 
#include<iostream>
using namespace std;
int main()
{
	string a;//此种情况下a就是一个数组 
	cin>>a;
	int len=a.length();//.length函数 
	
	int i;
	for(i=0;i<len;i++)
	{
		cout<<a[len-i - 1];
    } 
	return 0;
 } 
