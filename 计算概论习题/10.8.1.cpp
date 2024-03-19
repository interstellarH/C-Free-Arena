#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3];
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	int max=a[0],min=a[0];
	for(int i=0;i<3;i++){
		if (a[i]>=max) max=a[i];
	}
	for(int i=0;i<3;i++){
		if (a[i]<=min) min=a[i];
	}
	printf("%d",max-min);
	return 0;
}
