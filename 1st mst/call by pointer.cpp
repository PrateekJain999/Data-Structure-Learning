#include<iostream>
using namespace std;

int add(int *x,int *y)
{
	int z;
	
	*x=*x+5;
	*y=*y+3;
	z=*x+*y;
	
	return z;
}

main()
{
	int a=20;
	int b=10,c;
	
	c=add(&a,&b);
	
	printf("%d\n",c);
	printf("%d\n",a);
	printf("%d",b);
}
