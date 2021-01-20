#include <iostream>
using namespace std;

int main()
{
    int ar[100][100],i=0,j,k,n,sum[100]={0},y;
    
    cout<<"elements size of matrix: ";
    cin>>n;
    
    cout<<"elements of array: \n\n";
    
    for(j=0;j<n;j++)
    {
    	for(k=0;k<n;k++)
        {
    	    cin>>ar[j][k]; 
    	    y=k+j;
	    }
	}
	
	cout<<"\n\nsum of diagonal look likes: \n\n";
	
	while(i<=y)
    {
    	for(j=0;j<n;j++)
        {
    	    for(k=0;k<n;k++)
            {
    	        if((j+k)==i)
				{
					sum[i]=sum[i]+ar[j][k];
				} 
	        }
	    }
	    i++;
	}
	
	for(i=0;i<=y;i++)
    {
    	cout<<i+1<<"th diagonal sum:  "<<sum[i]<<endl;
	}
    return 0;
}

