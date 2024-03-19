#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		int count=0,j=2;
		int y=x;//之后x的值在不断变化，所以如果想要用初始值，就得把它存起来 
		while(j<=y){
		if(x%j==0&&count==0) {
			printf("%d=%d",x,j);
			
			x/=j;//在这一次判断之后就除掉了（即使不进入循环） 
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
		cout<<endl;
	}
	return 0;
}
