#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,x;
	cin>>n;
	int s[100]={0},a[301];//bug1，竟然写成char类型的，字符数组做多了都写出思维惯性了 
	for(i=0;i<n;i++)//bug1，写了循环但没用i，浪费 
	{
		cin>>x;
		a[i]=x;
		s[x]++;	
	}	
	int cnt=0;
	for(i=0;i<n;i++)
	{	
		if(s[a[i]]>=1&&cnt==0)
		{
			cout<<a[i];			
			s[a[i]]=0;
			cnt=1;
		}
		else if(s[a[i]]>=1&&cnt==1)	//bug3，这里还只能回到老方法 
		{
			cout<<','<<a[i];			
			s[a[i]]=0;
		}	
	}
	return 0;
} 

