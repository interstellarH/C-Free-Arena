#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N=1;
	float X,M,sum; 
	scanf("%f",&X);
	scanf("%f",&M);
	sum=X;
	while(sum<M){ 
		N=N+1;	
		X=1.08*X;
		M=1.1*M;
		sum=sum+X;
	}
	if(N<=100){
		printf("%d",N);
	}
	else{
		printf("Forget it.");
	}
}

//对while语句理解恰好反了
