#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a,b,c,x1,x2;
	cin>>a>>b>>c;
	cout<<fixed<<setprecision(5);
	if(b*b-4*a*c>=0)
	{
	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);//ע�ⲻ�����ó˷��ţ�Ҳ��������*�˺� 
	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	if(x1==x2) {
	cout<<"x1=x2="<<x1;}
	else if(x1>x2){//������Ĭ��x1>x2�������˸��еĲ�ʹ�������� 
	cout<<"x1="<<x1<<";"<<"x2="<<x2; }
	else if(x1<x2){
	cout<<"x1="<<x2<<";"<<"x2="<<x1; }
	}
	else{
		cout<<"no solution";
	}
	return 0;
}
