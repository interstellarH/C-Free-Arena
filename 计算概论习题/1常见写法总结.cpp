//һЩ�����ṹ�Ĵ���

//�ж�ĳ�����Ƿ�Ϊ����
int main()
{	
	int m,i,k;  
	cin>>m;  
	k=sqrt(m);  
	for(i=2;i<=k;i++)//�ж�С����ƽ�����ĸ������Ƿ�Ϊ������ 
	{
		if(m%i==0) break;
	} 
	if(i=k+1) cout<<c<< "Yes" <<endl;  
	else	cout<< "No"<<endl;
	
	return 0;
}
 
//�ж��������Ƿ���
int main()
{
	int a,b;
	while(1)
	{
		int temp=a%b;//շת����� 
		if(temp==0) break;
		else
		{
			a=b;
			b=temp;
		}
	}
	if(b==1) cout<<"YES";
	else cout<<"NO";
}
//�ֽ������� 
int main()
{
	int x,a,i;
	cin>>x;
	a=x;//��x�浽��һ�������У���Ϊ֮��ᷢ���ı�
	cout<<x<<'=';//��ȥ��֮�������ʱ����鷳
	for(i=2;i*i<a;i++)//������һ������ƽ�����������ӣ�����15 
	{
		while(x%i==0)//�п���ĳ�����ӷ������֣�����Ҫ��whileѭ�� 
		{
			cout<<i;
			x/=i;
			if(x!=1) cout<<"*";//����ǡ�ÿɱ��ֽ⣬��ô���x�ᱻ����1 
		}
	} 
	if(x!=1) cout<<x;//������һ������ƽ�����������Ӿ���� //һ��Ҫд��ѭ������ 
	return 0;
 } 

//�������ж�
int main()
{
	int x,a,k=0;//�ж�x�Ƿ�Ϊ������,k�������� 
	cin>>x;
	a=x;//��x��ֵ����a����aȥ�仯 
	while(a>0)
	{
		k=k*10+a%10;
		a/=10; 
	}
	if(x==k) cout<<"YES"��
	else cout<<"NO"; 
 } 
 
//����ת������x��10����10��y 
int main()
{
	int i,t=0,a,b;
	long sum=0; //��ʾ�м�ת���ɵ�10������ 
	char c[1000],d[1000];
	cin>>a>>c>>b;//����c��������ַ�����ĵ�ַ����һλ 
	int len=strlen(c);//*****
	int k=len-1;//һ�����չ����ʱ��Ҫ�� 
	for(i=0;i<len;i++)
	{
		if(c[i]>='0'&&c[i]<='9') t=c[i]-'0';
		else if(c[i]>='A'&&c[i]<='Z') t=c[i]-'A'+10;
		else if(c[i]>='a'&&c[i]<='z') t=c[i]-'a'+10;//��Сд��ĸҪ�ֿ����� 
		sum+=t*pow(a,k);
		k--;		
	}
	len=0;//��ʵҲ���Կ�һ���µı���
	if(sum==0) cout<<0;//��������Ϊ0����� 
	else
	{
		while(sum>0)//���sumһ������0 
		{
			t=sum%b;
			sum/=b;
			if(t>=0&&t<=9) d[len]=t+'0';
			else d[len]=t-10+'A';
			len++;
		}
		for(i=len-1;i>=0;i--) cout<<d[i];//����һ����������� 
	}
	
	return 0;
}
