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
			if(count==0) printf("%d=%d",x,x);
			else if(count==1&&x!=1) printf("*%d",x);
			cout<<endl;
	}
	return 0;
}
