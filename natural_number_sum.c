//Write a recursive function to calculate the sum of first n natural numbers.
#include<stdio.h>

int natural(int x);

int main()
{
	int n;
	
	printf("\nEnter the number: ");
	scanf("%d", &n);
	
	printf("\nThe sum of %d natural numbers is = %d",n,natural(n));
	return 0;
}

int natural(int x)
{
	if(x==0)
	{
		return x;
	}
	else
	{
		return x + natural(x-1);
	}
	
}
