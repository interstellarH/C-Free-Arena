#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,j,a[90],b[80],t;
	cin>>n;
	for(j=0;j<n;j++)
	{
		cin>>k;
		for(i=0;i<k;i++)
		{
			cin>>a[i];//һ��ʼд��a[k]�ˣ����ǵ�һ�η������������� 
		}
		t=0;//һ��ʼ�ֶ��嵽����ȥ�� 
		for(i=1;i<k-1;i++)
		{
			if((a[i]>a[i-1]&&a[i]>a[i+1])||(a[i]<a[i-1]&&a[i]<a[i+1])) 
			{
				b[t]=i;
				t++;
			}
		}
		if(a[0]!=a[1]) {b[t]=0;t++;}
		if(a[k-1]!=a[k-2]) {b[t]=k-1;t++;}
	
		sort(b,b+t); //֮ǰд����b+t-1��end���ԣ� 
		
		int cnt=0;
		for(i=0;i<t;i++)
		{
			if(cnt==0){
				cout<<b[i];cnt=1;
			}
			else cout<<" "<<b[i];
		}
		cout<<endl;
	}
	
	return 0;
} 

