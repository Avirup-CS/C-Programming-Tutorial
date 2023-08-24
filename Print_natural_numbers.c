#include<stdio.h>

int main()
{
	int i,a,b;
	
	printf("\nEnter the first number: ");
	scanf("%d",&a);
	
	printf("\nEnter the last number: ");
	scanf("%d",&b);
	
	printf("\nThe Natural numbers between %d and %d..... \n\n",a,b);
	for( i=a; i<=b; i++)
	{
		printf("\n\t%d",i);
	}
	return 0;
}
