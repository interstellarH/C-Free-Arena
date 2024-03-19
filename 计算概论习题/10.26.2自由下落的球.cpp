#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double h0,sum,a[1000];
	int n,i=1;
	cin>>h0>>n;
	sum=h0;
	a[0]=h0;
	do{
		a[i]=h0*pow(0.5,i);
		sum+=2*a[i];
	}while(i<n);
	cout<<fixed<<setprecision(4)<<sum<<" "<<a[n-1]*0.5;
}
//以上为超时写法 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double h0,s;
	cin>>h0>>n;
	cout<<fixed<<setprecision(4)<<2*h0*(1.5-pow(0.5,n-1))<<' '<<h0*pow(0.5,n);//直接用数学知识计算出公式 
	return 0;
} 
