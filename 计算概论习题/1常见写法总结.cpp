//一些常见结构的代码

//判断某个数是否为素数
int main()
{	
	int m,i,k;  
	cin>>m;  
	k=sqrt(m);  
	for(i=2;i<=k;i++)//判断小于其平方根的各个数是否为其因子 
	{
		if(m%i==0) break;
	} 
	if(i=k+1) cout<<c<< "Yes" <<endl;  
	else	cout<< "No"<<endl;
	
	return 0;
}
 
//判断两个数是否互质
int main()
{
	int a,b;
	while(1)
	{
		int temp=a%b;//辗转相除法 
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
//分解质因数 
int main()
{
	int x,a,i;
	cin>>x;
	a=x;//把x存到另一个变量中，因为之后会发生改变
	cout<<x<<'=';//免去了之后输出的时候的麻烦
	for(i=2;i*i<a;i++)//至多有一个大于平方根的质因子，比如15 
	{
		while(x%i==0)//有可能某个因子反复出现，所以要用while循环 
		{
			cout<<i;
			x/=i;
			if(x!=1) cout<<"*";//假如恰好可被分解，那么最后x会被除成1 
		}
	} 
	if(x!=1) cout<<x;//假如有一个大于平方根的质因子就输出 //一定要写在循环外面 
	return 0;
 } 

//回文数判断
int main()
{
	int x,a,k=0;//判断x是否为回文数,k是其逆序； 
	cin>>x;
	a=x;//把x的值给了a，让a去变化 
	while(a>0)
	{
		k=k*10+a%10;
		a/=10; 
	}
	if(x==k) cout<<"YES"；
	else cout<<"NO"; 
 } 
 
//数制转换，从x到10，从10到y 
int main()
{
	int i,t=0,a,b;
	long sum=0; //表示中间转换成的10进制数 
	char c[1000],d[1000];
	cin>>a>>c>>b;//这里c代表这个字符数组的地址，第一位 
	int len=strlen(c);//*****
	int k=len-1;//一会进行展开的时候要用 
	for(i=0;i<len;i++)
	{
		if(c[i]>='0'&&c[i]<='9') t=c[i]-'0';
		else if(c[i]>='A'&&c[i]<='Z') t=c[i]-'A'+10;
		else if(c[i]>='a'&&c[i]<='z') t=c[i]-'a'+10;//大小写字母要分开处理 
		sum+=t*pow(a,k);
		k--;		
	}
	len=0;//其实也可以开一个新的变量
	if(sum==0) cout<<0;//处理输入为0的情况 
	else
	{
		while(sum>0)//最后sum一定会变成0 
		{
			t=sum%b;
			sum/=b;
			if(t>=0&&t<=9) d[len]=t+'0';
			else d[len]=t-10+'A';
			len++;
		}
		for(i=len-1;i>=0;i--) cout<<d[i];//这里一定是逆序输出 
	}
	
	return 0;
}
