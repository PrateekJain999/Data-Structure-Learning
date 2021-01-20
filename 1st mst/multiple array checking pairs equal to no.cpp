#include <iostream>
using namespace std;

int main()
{
    int ar[100],i=0,j,k,n,y;
    
    cout<<"elements size of array: ";
    cin>>n;
    
    cout<<"elements of array: \n\n";
    
    for(j=0;j<n;j++)
    {
    	
    	cout<<"\nar["<<j<<"] : ";
    	cin>>ar[j];
	}
	
	cout<<"\n\nenter your no. : ";
	cin>>y;
	cout<<endl<<endl<<"all pairs are: "<<endl<<endl;
	
	for(j=0;j<n;j++)
        {
    	    for(k=j+1;k<n;k++)
            {
    	        if(ar[j] !=0 && ar[k] !=0)
				{
					if((ar[j]+ar[k])==y)
				    {
					    cout<<j+1<<") pair:  ar["<<j<<"] + ar["<<k<<"]"<<endl;
				    } 
				} 
	        }
	        
			/*if(ar[j]==y)
			{
				cout<<j+1<<") pair:  ar["<<j<<"]"<<endl;
			}*/ 
	    }
	
    return 0;
}

