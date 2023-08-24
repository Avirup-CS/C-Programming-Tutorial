#include<stdio.h>
void main()
{
	int i=1,n,fact=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("The factorial is: %d",fact);
}
