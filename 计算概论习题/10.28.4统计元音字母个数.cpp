#include<bits/stdc++.h>
using namespace std;
int main()
{
	int numa,nume,numi,numo,numu,x[1000]={0};
	char c;
	while(cin>>c)//也可使用cin.get（c） 
	{
		switch(c)
		{
			case 'a': x[0]++;break;
			case 'A': x[0]++;break;
			case 'e': x[1]++;break;
			case 'E': x[1]++;break;
			case 'i': x[2]++;break;
			case 'I': x[2]++;break;
			case 'o': x[3]++;break;
			case 'O': x[3]++;break;
			case 'u': x[4]++;break;
			case 'U': x[4]++;break;
		}
	}
	printf("%d %d %d %d %d",x[0],x[1],x[2],x[3],x[4]);
	return 0;
} 

