#include<bits/stdc++.h>
using namespace std;
int read(int a[],int b[])
{
	int m,n;
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
}

int sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}	
} 

int combine()
{
	
 } 

void show(int c[])
{
	int length=sizeof(c)/sizeof(int);
	for(int i=0;i<length;i++)
	{
		if(i!=0) cout<<' ';
		cout<<c[i];
	}	
}

int main()
{
	read(int a[], int b[]);
	sort(a[]);
	sort(b[]);
	combine(a[],b[])
	
}
