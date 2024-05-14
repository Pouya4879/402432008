#include<iostream>
using namespace std;
int f(int ,  int );
main()
{
	int x,y;
	cin>>x>>y;
	cout<<f(x,y);
}
int f(int a , int b)
{
	return a+b;
}
