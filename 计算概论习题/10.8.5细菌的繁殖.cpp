	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int n,i,j,temp,num1;
		float b,c,t;
		cin>>n;
		int a[n];
		float r[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b>>c;
			r[i]=(c-b+1.0-1.0)/b;
		}
		for(int i=1;i<n;i++)
		{
			for(j=0;j<n-i;j++)
			{
				if(r[j]<r[j+1])
				{t=r[j];
				r[j]=r[j+1];
				r[j+1]=t;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				}
			}
		}
		for(i=1;i<n-1;i++)
		{
			if ((r[i]-r[i+1])>(r[0]-r[i])&&(r[i]-r[i+1])>(r[i+1]-r[n]))
			{
				num1=i+1;
			}
	    }
	    
		cout<<num1<<endl;
		for(i=num1-1;i>=0;i--)
		{
			cout<<a[i]<<endl;
		}
		cout<<n-num1<<endl;
			for(i=n-1;i>num1-1;i--)
		{
			cout<<a[i]<<endl;
		}
		return 0;
	} 
