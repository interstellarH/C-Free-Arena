#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,b,max=0,sum=0;
	cin>>n; 
	int a[n];
	for(i=0;i<n;i++){
		cin>>b;
		a[i]=b;
		} 
	for(i=0;i<n;i++)
	{
		if(a[i]>max){max=a[i];}
	}
	for(i=0;i<n;i++)
		if(a[i]!=max){
			sum=sum+a[i];
		}
	cout<<sum;
	return 0;
}
