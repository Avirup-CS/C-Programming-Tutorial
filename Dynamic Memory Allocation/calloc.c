//Dynamic memory allocation using calloc function
//Here default initialization for any input is 0.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int i,n;

    printf("\nEnter the number of elements do you want: ");
    scanf("%d",&n);
    
    ptr = (int*)calloc(n,sizeof(int));
    
    for(i=0;i<n;i++)
    {
    	printf("Enter the value at %d : ",i);
    	scanf("%d",&ptr[i]);
	}
	
	for(i=0;i<n;i++)
    {
    	printf("\nThe value at %d is =  %d",i,ptr[i]);
	}
	
	free(ptr);
	
	return 0;
}

