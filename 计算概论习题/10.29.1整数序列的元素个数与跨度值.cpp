#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,x,i,span,min,max=0,t=0,a[100000];
	while(cin>>x)
	{
		if(x!=',') 
		{
			a[t]=x;t++;num++;
		}
		getchar();
	}
	for(i=0;i<t;i++)
	{
		if(a[i]>max) max= a[i];
	}
	min=max;
	for(i=0;i<t;i++)
	{
		if(a[i]<min) min = a[i];
	}
	span = max- min;
	cout<<num<<endl;
	cout<<span;
	return 0;
} 

