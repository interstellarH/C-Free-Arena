#include<bits/stdc++.h>
using namespace std;
int main()
{
	//string.erase������pos����ʼ�±꣬�ڶ���ֵlen�ǳ��ȣ� 
	string s1,s2,s3;
	string s="hello,world!" ;
	s3=s.erase(3,2);//erase֮��s�Ǳ仯�˵ģ����Ե�����������˳�򣬽���᲻һ�� 
	s1=s.erase(0,1);
	s2=s.erase(0,2);	
	cout<<s1<<' '<<s2<<" "<<s3; 
	
	//string.find()
	return 0;
} 

