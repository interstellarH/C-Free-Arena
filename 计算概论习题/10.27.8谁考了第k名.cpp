#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,x,i,n,a[100];
	double b[100],temp,y;//一开始又惯性地定义成了，int，审题 
	cin>>n>>k;
	for(i=0;i<n;i++) 
	{
		cin>>x>>y;
		a[i]=x;
		b[i]=y;
	}
	int j;
	for(i=0;i<n;i++) //一个特别严重的问题啊，我都没有意识到要排序，只是按照给出的顺序在排 
		for(j=0;j<n-i-1;j++)//冒泡排序请熟记 
		{
			if(b[j]<b[j+1])
			{
				temp=b[j];	b[j]=b[j+1];	b[j+1]=temp;
				temp=a[j];	a[j]=a[j+1];	a[j+1]=temp;				
			}
		}
	printf("%d %g",a[k-1],b[k-1]); 
	return 0;
} 
