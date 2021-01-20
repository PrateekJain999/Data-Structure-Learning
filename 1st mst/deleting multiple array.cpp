#include<stdio.h>
#include<conio.h>

main()
{
	int ar[100],i,n,j,a,b,c=0,br[100];
	printf("\t\tPRATEEK JAIN\n\t\t 17BCS4110\n\n");
	printf("enter the no that you want to use: ");
	scanf("%d",&n);
	
	printf("\nenter the %d element of array: \n",n);
	
	for(i=1;i<=n;i++)
	{
		printf("\nar[%d] : ",i);
		scanf("%d",&ar[i]);
	}
	
	printf("\nenter the no of element that you want to delete: \n");
	scanf("%d",&a);
	
	for(j=1;j<=a;j++)
	{
		printf("\n%d element: ",j);
		scanf("%d",&br[j]);
		c++;
		printf("\n");
		
		for(i=br[j]+1-c;i<n;i++)
	    {
		    ar[i]=ar[i+1];
	    }
	}
	for(i=1;i<=n-a;i++)
	{
		printf("\nar[%d] : %d",i,ar[i]);
	}
}
