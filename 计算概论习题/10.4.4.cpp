#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a,b,c,x1,x2;
	cin>>a>>b>>c;
	cout<<fixed<<setprecision(5);
	if(b*b-4*a*c>=0)
	{
	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);//注意不可以用乘方号，也不能忘了*乘号 
	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	if(x1==x2) {
	cout<<"x1=x2="<<x1;}
	else if(x1>x2){//不可以默认x1>x2啊，忘了高中的惨痛经历了吗 
	cout<<"x1="<<x1<<";"<<"x2="<<x2; }
	else if(x1<x2){
	cout<<"x1="<<x2<<";"<<"x2="<<x1; }
	}
	else{
		cout<<"no solution";
	}
	return 0;
}
