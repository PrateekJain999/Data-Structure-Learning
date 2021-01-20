#include <iostream>
using namespace std;

int main()
{
    int ar[100],i,j,k,temp,a;
    cout<<"enter the no of array: ";
    cin>>a;
    
    cout<<"enter "<<a<<" elements of array: \n\n";
    
    for(i=0;i<a;i++)
    {
    	cout<<"\nar["<<i<<"] : ";
    	cin>>ar[i]; 
	}
	
	cout<<"\n\nsorted array looks like: \n\n";
	
	for (i=1; i<a; i++)
    {
       temp = ar[i];
       j = i-1;
       
       while (j>=0 && ar[j]>temp)
       {
           ar[j+1] = ar[j];
           j = j-1;
       }
       ar[j+1] = temp;
    }
	
	for(i=0;i<a;i++)
    {
    	cout<<"\nar["<<i<<"] : "<<ar[i];
	}
    return 0;
}

