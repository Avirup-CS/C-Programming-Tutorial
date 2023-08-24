#include<stdio.h>
void main()
{
	int n,odd=0,even=0;
	printf("Enter any Number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		odd=odd+n%10;
		n=n/10;
		even=even+n%10;
		n=n/10;
	}
	if(odd==even)
	{
		printf("\nDivisible by 11");
	}
	else
	{
		printf("\nNot Divisible by 11");
	}
}
