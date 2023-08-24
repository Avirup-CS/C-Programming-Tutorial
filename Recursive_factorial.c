#include<stdio.h>

int factorial(int num)
{
	if( num==1 || num==0 )
	{
		return 1;
	}
	
	else
	{
		return (num*factorial(num-1));
	}
}


int main()
{
	int n;
	
	printf("\nEnter the number for factorial calculation: ");
	scanf("%d",&n);
	
	printf("\nThe factorial of %d is = %d",n,factorial(n));

	return 0;
}

