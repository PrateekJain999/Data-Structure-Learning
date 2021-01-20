#include <stdio.h>
#include <malloc.h>
#include<math.h>
int main()
{
    int n,i,*p;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    p=(int *)calloc(n, sizeof(int)*n);  //memory allocated using calloc 
    printf("size of calloc: %d\n",sizeof(p));// print pointer size not the allocated size
    
	if(p == NULL)                     
    {
        printf("memory cannot be allocated\n");
    }
    else
    {
      p=(int*)realloc(p,sizeof(int)*(n+1));
      
      printf("Enter elements of array:\n");
      for(i=0;i<n+1;++i)
      {
        scanf("%d",&*(p+i));
      }
      printf("Elements of array are\n");
      for(i=0;i<n+1;i++)
      {
        printf("%d\n",*(p+i));
      }
      free(p);
    }
    return 0;
}
