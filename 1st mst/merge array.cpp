#include<iostream>
using namespace std;

main()
{
	int i,n,a,b=0,c,d,ar[100],br[100];
	
	cout<<"enter the no of element that you want to insert in array 1st : ";
	cin>>a;
	
	for(i=0;i<a;i++)
	{
		cout<<endl<<"ar["<<i<<"] : ";
		cin>>ar[i];
	}
	
	cout<<endl<<endl<<"enter the no of element that you want to insert in array 2nd : ";
	cin>>b;
	
	for(i=0;i<b;i++)
	{
		cout<<endl<<"br["<<i<<"] : ";
		cin>>br[i];
	}
	
	cout<<"enter 1 when you want to enter 1st array at 1st position: "<<endl;
	cout<<"enter 2 when you want to enter 1st array at 2nd position: "<<endl;
	cin>>n;
	
	switch(n)
	{
		case 1:
			
			for(i=0;i<b;i++)
			{
				ar[i+a]=br[i];
			}
			for(i=0;i<a+b;i++)
			{
				cout<<ar[i]<<endl;
			}
			break;
			
		case 2:
			
			for(i=0;i<a;i++)
			{
				br[i+b]=ar[i];
			}
			for(i=0;i<a+b;i++)
			{
				cout<<br[i]<<endl;
			}
			break;
	}
}
