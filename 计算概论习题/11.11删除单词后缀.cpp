#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int t;
		string s;
		cin>>s;
		int k=s.length()-1; 
		if((s[k]=='r'&&s[k-1]=='e')||(s[k]=='y'&&s[k-1]=='l'))
		{
			s.erase(k-1,2);//ע��ʹ����erase֮��length���� 
		}
		else if(s[k]=='g'&&s[k-1]=='n'&&s[k-2]=='i')
		{
			s.erase(k-2,3);//����erase�Ǵӵ�k-2��Ԫ�أ�ɾ���䡰֮��� ��n��Ԫ�� 
		}				
  		cout<<s<<endl;
	 } 
	return 0;
} 

