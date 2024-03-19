#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n)//n为元素个数 
{
	for(int i=n-1;i>0;i--)
		for(int j=0;j<=i;j++)
		{
			if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}
}
//也可以这样写
void bubblesort(int a[],int n) 
{
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
}
int main()
{
	int a[100],n,i,x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		a[i]=x;
	}
	bubblesort(a,n);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
