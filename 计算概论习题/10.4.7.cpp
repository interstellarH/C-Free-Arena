#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,s1=0,s2=0,i,n;
	cin>>n;
	for (i=0;i<n;i++){
		cin>>a>>b;
		if(a-b==-1||a-b==2){s1=s1+1;}//�ر�ע����ʽ���ﲻҪд��ֵ�ţ����ǵȺ� 
		else if (a-b==1||a-b==-2){s2=s2+1;}//������Ҫ�������ı��ʽ������a-b�ķ��෽ʽֵ��ѧϰ 
		else{s1=s1;s2=s2;}//���п��п��� 
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
