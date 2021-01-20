#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int n,*p;
	printf("n: ");
	scanf("%d",&n);
	
	p=(int*)malloc(sizeof(int)*n);
	printf("\n\nsize of malloc : %d\n\n",sizeof(p));  // it returns pointer size not the allocates size.
	
	//You can Declare an Array of size m but store n elements , 
	//where m<n , but the elements stored after the mth location will not be considered to be within the Declared array.
	// still you can access beyond the array limit but it's not a good practice
	
	for(int i=0;i<5;i++)
	{
		scanf("%d",p+i);
	}
	
	printf("\narray are: \n\n");
	
	
	for(int i=0;i<5;i++)
	{
		printf("\nar[%d] : %d",i,*(p+i));
	}
}
