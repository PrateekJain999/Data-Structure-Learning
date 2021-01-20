#include<iostream>
using namespace std;

main()
{
	int i,n,a,b=0,c,d,ar[100];
	
	cout<<"enter the no of element that you want to insert: ";
	cin>>a;
	
	for(i=0;i<a;i++)
	{
		cout<<endl<<"ar["<<i<<"] : ";
		cin>>ar[i];
	}
	
	cout<<endl<<"press 1 for display all element."<<endl;
	cout<<"press 2 for checking element exists or not."<<endl;
	cout<<"press 3 for inserting element at the end."<<endl;
	cout<<"press 4 for inserting element at the random position. "<<endl;
	cout<<"press 5 for delete an element from the array."<<endl;
		
	cout<<endl<<"enter: ";
	cin>>n;
	
	switch(n)
	{
		case 1:
			for(i=0;i<a;i++)
	        {
		        cout<<endl<<"ar["<<i<<"] :"<<ar[i]<<endl;
	        }
	        break;
	        
	    case 2:
	    	cout<<endl<<"enter element that you want to check: ";
	    	cin>>c;
	    	
	    	for(i=0;i<a;i++)
	        {
		        if(ar[i]==c)
		        {
		        	b=1;
		        	cout<<endl<<endl<<"element found at: "<<i+1;
		        	break;
				}
	        }
	        if(b==0)
	        {
	        	cout<<endl<<"element not found";
			}
			break;
		
		case 3:
			cout<<endl<<"enter element that you want to enter at last: ";
			cin>>ar[a];
			
			for(i=0;i<=a;i++)
	        {
		        cout<<endl<<"ar["<<i<<"] :"<<ar[i]<<endl;
	        }
	        break;
	        
	    case 4:
	    	cout<<endl<<"enter position where you want to enter new element: ";
	    	cin>>d;
	    	
	    	for(i=a-1;i>=d-1;i--)
	        {
		        ar[i+1]=ar[i];
	        }
	        
	        cout<<"enter element: ";
	        cin>>ar[d-1];
	        
	        for(i=0;i<=a;i++)
	        {
		        cout<<endl<<"ar["<<i<<"] : "<<ar[i];
	        }
	        break;
	        
	    case 5:
	    	cout<<endl<<"enter position where you want to delete an element: ";
	    	cin>>d;
	    	
	    	for(i=d-1;i<a;i++)
	        {
		        ar[i]=ar[i+1];
	        }
	        
	        for(i=0;i<a-1;i++)
	        {
		        cout<<endl<<"ar["<<i<<"]"<<ar[i];
	        }    
	}
}
