#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		int count=0,j=2;
		int y=x;
		while(j*j<=y){
			if(x%j==0&&count==0) {
				printf("%d=%d",x,j);
				
				x/=j;
			    while(x%j==0){
				x=x/j;
				printf("*%d",j);
				}
				
				count=1;
				j++;
			} 
			else if (x%j==0&&count==1){
				printf("*%d",j);
				
				x/=j;
				while(x%j==0){
				x=x/j;
				printf("*%d",j);
				}
				
				j++;
			}
			else j++;
		}
			if(count==0) printf("%d=%d",x,x);//处理直接输入的就是质数（不进入循环，则count=0） 
			else if(count==1&&x!=1) printf("*%d",x);//为什么要加x！=1 呢 ——因为如果采用判断条件j*j<y，就会漏输出最后一个因子 
			cout<<endl;
	}
	return 0;
}
