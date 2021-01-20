#include<iostream>
using namespace std;

main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9},*p;
	
	cout<<"&a[0] : "<<&a[0]<<endl;
	cout<<"a : "<<a<<endl;
	
	p=&a[0];
	
	cout<<"p=&a[0] : "<<p<<endl;
	cout<<"p=&a[0] : "<<*p<<endl;
	
	p=a;
	
	cout<<"p=a : "<<a<<endl;
	cout<<"p=a : "<<*a<<endl;
	cout<<"p=a : "<<p<<endl;
	cout<<"p=a : "<<*p<<endl;
	
	cout<<"p=a : "<<p+1<<endl;
	cout<<"p=a : "<<*(p+1)<<endl;	
}
