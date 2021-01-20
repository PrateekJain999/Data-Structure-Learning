#include<stdio.h> 
#include<stdlib.h> 
int main ( ) 
{ 
    int i,j,rows;
	int (*a)[3];
	
	printf("Enter number of rows ");
	scanf ("%d", &rows);
	
	a=(int (*) [3] )malloc(rows*3*sizeof(int));
	
	for(i=0;i<rows;i++) 
	{
	    for(j=0;j<3;j++) 
		{ 
		    printf("Enter a[%d] [%d] : ",i,j); 
			scanf ("%d", &a [i] [j]);
	    }
    }
			printf ("\n\n\nThe matrix is : \n");
			
			for(i=0;i<rows;i++) 
			{ 
			    for(j=0;j<3;j++) 
				{
					printf ("%d", a[i][j]);\
					printf("\t"); 
				}
				printf("\n");
			} 
			free(a); 

}
