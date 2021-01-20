#include<iostream>
using namespace std;

main()
{
	int *p,ar[100];
	
	cout<<"enter 5 elements of array: "<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<"ar["<<i<<"] : ";
		cin>>ar[i];
	}
	
	p=&ar[0];
	
	cout<<"entered elements are: "<<endl<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<"ar["<<i<<"] : "<<*(p+i)<<endl;
	}
	
}
