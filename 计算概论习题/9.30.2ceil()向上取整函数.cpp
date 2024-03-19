#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,r,n;
	const float PAI=3.14159;
	cin>>h>>r;
	n=ceil(2e4/(PAI*r*r*h));//ceil()向上取整函数 
	cout<<n;
	return 0;
 } 
