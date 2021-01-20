#include<iostream>
using namespace std;

main()
{
	int i,n,a,b=0,j=1,k=1,c,ar[100],br[100],cr[100];
	cout<<":.:.:.:.:. PRATEEK JAIN .:.:.:.:.:\n:.:.:.:.:.:. 17BCS4110 .:.:.:.:.:.:\n\n";
	cout<<"enter the no of element that you want to insert in array 1st : ";
	cin>>a;
	
	for(i=1;i<=a;i++)
	{
		cout<<endl<<"ar["<<i<<"] : ";
		cin>>ar[i];
	}
	
	cout<<endl<<endl<<"enter the no of element that you want to insert in array 2nd : ";
	cin>>b;
	
	for(i=1;i<=b;i++)
	{
		cout<<endl<<"br["<<i<<"] : ";
		cin>>br[i];
	}
	
	cout<<endl<<endl<<"enter 1 when you want to enter 1st array at 1st position: "<<endl;
	cout<<"enter 2 when you want to enter 1st array at 2nd position: "<<endl;
	cout<<endl<<"enter: ";
	cin>>n;
	cout<<endl<<endl;
	
	switch(n)
	{
		case 1:
			
			for(i=1;i<=a+b;i++)
			{
				if(i%2!=0)
				{
					cr[i]=ar[j];
					j++;
				}
				
				if(i%2==0)
				{
					cr[i]=br[k];
					k++;
				}
				
			}
			
			for(i=1;i<=a+b;i++)
			{
				cout<<"ar["<<i<<"] : "<<cr[i]<<endl;
			}
			break;
			
		case 2:
			
			for(i=1;i<=a+b;i++)
			{
				if(i%2!=0)
				{
					cr[i]=br[k];
					k++;
				}
				
				if(i%2==0)
				{
					cr[i]=ar[j];
					j++;
				}
				
			}
			
			for(i=1;i<=a+b;i++)
			{
				cout<<"br["<<i<<"] : "<<cr[i]<<endl;
			}
			break;
			
	}
}
