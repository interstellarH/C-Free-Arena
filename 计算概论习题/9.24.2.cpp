#include<string>//from lyt 
#include<iostream>
using namespace std;
int main()
{
	string a;//���������a����һ������ 
	cin>>a;
	int len=a.length();//.length���� 
	
	int i;
	for(i=0;i<len;i++)
	{
		cout<<a[len-i - 1];
    } 
	return 0;
 } 
