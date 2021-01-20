#include <iostream>
using namespace std;

int main()
{
    int ar[100],i,j,k,temp,a,p;

    cout<<"enter the no of array: ";
    cin>>a;
    
    cout<<"enter "<<a<<" elements of array: \n\n";
    
    for(i=0;i<a;i++)
    {
    	cout<<"\nar["<<i<<"] : ";
    	cin>>ar[i]; 
	}
	
	cout<<"\n\nsorted array looks like: \n\n";
	
	for (i=0; i<a; i++)
    {
       p=ar[i];
       k=i;
       
       for(j=i+1;j<a;j++)
       {
       	    if(ar[j]<p)
       	    {
       	    	k=j;
       	    	p=ar[j];
			}
	   }
	   p=ar[i];
	   ar[i]=ar[k];
	   ar[k]=p;
    }
	
	for(i=0;i<a;i++)
    {
    	cout<<"\nar["<<i<<"] : "<<ar[i];
	}
    return 0;
}

