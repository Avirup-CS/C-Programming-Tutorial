#include<stdio.h>

int main()
{
	int i=1, n, fact=1;
	
	printf("\nEnter the number: ");
	scanf("%d",&n);
	do
	{
		fact *= i;
		i++;
		
	}while(i<=n);
	
	printf("\nThe factorial of %d is : %d", n, fact);
	return 0;
}
