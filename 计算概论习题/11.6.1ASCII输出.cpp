#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	int t=0;
	while((c=cin.get())!='\n')
	{
		if(c%2==0) 
		{
			if(t!=0) cout<<',';
			cout<<(int)c;
			t++;
		}
	}
	if(t==0) cout<<"NO";
	return 0;
}

