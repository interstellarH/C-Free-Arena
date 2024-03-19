#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	while (scanf("%d",&a)!=EOF)
	{
	if((a%3==0)||((a%10)==3)||((a/10)==3)){cout<<"TRUE"<<endl;}
	else cout<<"FALSE"<<endl;		
	}
	return 0;
}  
