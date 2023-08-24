
//Recursion


#include<stdio.h>

void main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Factorial is : %d",factorial(n));
	
}

int factorial(int n)
{
	if(n==1)
	    return n;
	else
	    return( n * factorial(n-1));
	
}
