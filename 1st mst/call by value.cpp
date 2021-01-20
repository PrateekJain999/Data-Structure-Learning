#include<iostream>
using namespace std;

int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}

main()
{
	int a=20;
	int b=10,c;
	
	c=add(a,b);
	
	printf("%d",c);
}
