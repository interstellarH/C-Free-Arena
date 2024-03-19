#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,s1=0,s2=0,i,n;
	cin>>n;
	for (i=0;i<n;i++){
		cin>>a>>b;
		if(a-b==-1||a-b==2){s1=s1+1;}//特别注意表达式那里不要写赋值号，而是等号 
		else if (a-b==1||a-b==-2){s2=s2+1;}//或两边要是完整的表达式，这种a-b的分类方式值得学习 
		else{s1=s1;s2=s2;}//这行可有可无 
	if(s1>s2){
		cout<<"A";
	}
	else if (s1<s2){
		cout<<"B";
	}
	else{
		cout<<"Tie";
	}
	return 0;
}
