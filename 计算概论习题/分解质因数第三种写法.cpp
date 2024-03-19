#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[300],x,n,i,cnt,t,c;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		//之前zyc写了个a[300]={0};但这个显然是错的，数组越界了，而且初始化只可以在定义变量时进行 
		t=0;
		cnt=0; 
		int y=x,j=2;
		while(j*j<=y)
		{
			if(x%j==0) //这一部分写的赘余了，详见常见写法总结 
			{
				cnt=1; 
				a[t]=j;
				t++;
				x/=j;
			    while(x%j==0)//其实在做同样的事情，完全可以统一起来 
				{
					x=x/j;
					a[t]=j;
					t++;
				}
				j++;	
			} 
			else j++;
		}	
		if(cnt==1)//说明进了循环 
		{
		printf("%d=%d",y,a[0]);
		for(c=1;c<t;c++) printf("*%d",a[c]);//这里我本来也用了i，但其实是不对的，因为还在那个i的循环里啊 
		if(x!=1) printf("*%d",x);
		}
		else	printf("%d=%d",y,y);//输入的就是质数，不进入循环 
		cout<<endl;
		printf("%d %d\n",i,n);
	}
	return 0;
}
