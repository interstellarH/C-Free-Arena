#include<bits/stdc++.h>
using namespace std;
int main()
{
	//string.erase函数（pos是起始下标，第二个值len是长度） 
	string s1,s2,s3;
	string s="hello,world!" ;
	s3=s.erase(3,2);//erase之后s是变化了的，所以调整这三语句的顺序，结果会不一样 
	s1=s.erase(0,1);
	s2=s.erase(0,2);	
	cout<<s1<<' '<<s2<<" "<<s3; 
	
	//string.find()
	return 0;
} 

