#include<bits/stdc++.h>
using namespace std;
int main()
{
	int z,q,s,l;//�Ҿ�����д�ıȴޱ�� 
	int w[4]={0};
	char y[5]={'z','q','s','l'};
	for( q=40;q<=50;q=q+10)
	{
		w[1]=q;//ΪʲôҪ�ٿ�һ�����顪������ѭ����ʱ��ʹ�ã���ֹۣ���Ҫһ���־�д�� 
		for( z=10;z<=30;z=z+10)
		{
			w[0]=z;
			for(s=10;s<=30;s=s+10)
		    {
		    	w[2]=s;
		    	if(z==s) continue;
		    	for(l=30;l<=50;l=l+10)
		    	{
		    		w[3]=l;
		    		if((l==q)||(l==z)||(l==s)) continue;
					if(((z+s)<q)&&((z+q)==(s+l))&&((z+l)>(s+q)))
					{
						for(int i=0;i<3;i++)
							for(int j=0;j<3-i;j++)
							{
								if(w[j]<w[j+1])//�����ð�ݣ�ֻҪ���С�ںż��� 
								{
									int temp=w[j];
									w[j]=w[j+1];
									w[j+1]=temp;
									char t=y[j];
									y[j]=y[j+1];
									y[j+1]=t;
								}	
							}
						for(int i=0;i<=3;i++)
						{
							printf("%c %d\n",y[i],w[i]);
						}	
					}
				}
				
			}
		}
		    
	}	
	return 0;
} 

