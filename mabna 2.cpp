#include <iostream>
using namespace std;
main()
{
	int n,i,m,x,k,reverse=0;
	cout<<"enter n:";
	cin>>n;
	
	for(i=n ; i>=1 ; i/=2)
	{
		{
			m=i%2;
			x=m;
			cout<<x;	
		}
		
	}
	cout<<'\n';
	cout<<"enter numbers above you:";
	cin>>k;
	while(k != 0)
	{ 
	int remainder = k%10;
	reverse = reverse*10 + remainder;
	k/=10;
	} 
	cout << "Reversed number = " << reverse;
	return 0;
}

