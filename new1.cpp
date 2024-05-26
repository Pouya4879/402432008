#include <iostream>
using namespace std;
long int f(long int );

main()
{
	long int n;
	cout<<"enter n:";
	cin>>n;
	cout<<f(n);
}
long int f(long int a)
{
		long int b,c=0;
		while(a>0)
	{
		b=a%10;	
		c=c*10+b;   
		a=a/10;    
	}
	return c;
}