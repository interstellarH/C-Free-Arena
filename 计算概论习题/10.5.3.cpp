#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	float c;
	cin>>a>>b;
	if(b<=6){
		c=3;
	}
	else if(b>6&&b<=12){
		c=4;
	}
	else if(b>12&&b<=32){
		c=4+1*ceil((b-12)/10.0);
	}
	else{
		c=4+2+1*ceil((b-32)/20.0);
	}
	
	if(a>=100&&a<150){
		c=c*0.8;
	}
	else if(a>=150&&a<400){
		c=c*0.5;
	}
	printf("%.2f",c);
	return 0;
}
