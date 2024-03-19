#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x;
	while(x!=1)
	{
		if(x%2==1) 
		{
			y=x;
			x=x*3+1;
			printf("%d*3+1=%d\n",y,x);
		}
		if(x%2==0) 
		{
			y=x;
			x=x/2;
			printf("%d/2=%d\n",y,x);
		}
	}
	cout<<"End";
	return 0;
}
