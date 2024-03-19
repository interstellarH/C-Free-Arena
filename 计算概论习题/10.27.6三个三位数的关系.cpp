#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z,a[9],i,j,cnt;
	for(x=123;x<333;x++)
	{
		cnt=0;
		y=2*x;
		z=3*x;
		a[0]=x/100;a[1]=(x/10)%10;a[2]=x%10;
		a[3]=y/100;a[4]=(y/10)%10;a[5]=y%10;
		a[6]=z/100;a[7]=(z/10)%10;a[8]=z%10;
		
		for(i=0;i<8;i++)
		{
			for(j=i+1;j<9;j++)
			{
				if(a[j]==a[i]||a[i]*a[j]==0)
				{
					cnt=1;break;
				}
			}
			if(cnt==1) break;
		}
		if(cnt==0) printf("%d %d %d\n",x,y,z); 
	}
	return 0;
} 
