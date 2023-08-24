
//Recursion


#include<stdio.h>

void main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	factorial(n);
}

void factorial(int n)
{
	int i,fact=1;
	for(i=1; i<=n; i++ )
	fact=fact*i;
	
	printf("\nFactorial is : %d",fact);
}
