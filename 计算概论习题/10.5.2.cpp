#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=0,b;
	char s;
	while((s=cin.get())!=EOF)
	{b=s;
	if(b%2==0&&b!=10){
		if(a==1){
		    printf(",%d",b);
		    a=1;
		}
		else{
			printf("%d",b);
			a=1;
		}
	}
	}
		if(a==0) {
		printf("NO");
	}
	return 0;
}
