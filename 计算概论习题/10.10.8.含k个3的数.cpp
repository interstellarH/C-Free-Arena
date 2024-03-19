#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k, count=0;
	string m;
	cin>>m>>k;
	for(int i=0;i<m.length();i++)
	{
		if(m[i]-'0'==3)
			count++;
	}
	
	int d =0;
	 d=atoi(m.c_str());//还可以用一个循环

	if(d%19==0&&count==k)
	{
		cout<<"YES";
	}
	else 
	cout<<"NO";
	return 0;
} 
