#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int a1=1;a1<=3;a1++)
	{
		int a2=4;
		if(a1==3) continue;
		for(int b1=1;b1<=4;b1++)
		{
			if(b1==2) continue;
			for(int b2=b1+1;b2<=4;b2++)//从b1+1开始枚举，防止重复同时还可以保证顺序 
			{
				if(b2==2)continue;
				if(b1==3&&b2==4) continue;
				for(int d=1;d<=3;d++)
				{
					for(int c1=1;c1<=4;c1++)
						for(int c2=c1+1;c2<=4;c2++)
						{
							if(c1==3&&c2==4) continue; 
							bool f0=false;
							for(int i=1;i<=4;i++)
							{
								if((a1==i)+(b1==i)+(c1==i)+(a2==i)+(b2==i)+(c2==i)+(d==i)==3)
								{
									f0=true;
									break;
								}
							}
							bool f1=false;
							if((a1!=c2)&&(a1!=c1)&&(a2!=c1)&&(a2!=c2)) f1=true;
							
							bool f2=false;
							if((c1!=d)&&(c2!=d)) f2=true;
							
							bool f3=false;
							if((b1==c1)||(b1==c2)||(b2==c1)||(b2==c2)) f3=true;
							
							if(f0 && f1 && f2 && f3) 
							{
								printf("%d %d\n",a1,a2);
								printf("%d %d\n",b1,b2);
								printf("%d %d\n",c1,c2);
								printf("%d\n",d);	
							}
							
						}
				}
			}
		}
	}
	
	
	return 0;
 } 
