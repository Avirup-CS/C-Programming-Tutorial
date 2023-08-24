#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("\nHow many lines to print : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++) //this loop controls line number
	{
		for(j=1;j<=n-i;j++) //this loop controls spaces to print
		{
			printf(" ");
		}
	    for(k=1;k<=2*i-1;k++) //this loop controls * to print
	    {
	    	printf("*");
		}
	printf("\n");	
	}
}
