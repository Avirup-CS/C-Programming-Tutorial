#include<stdio.h>
void main()
{
	int num,rem;
	printf("\n Enter the input :");
	scanf("%d",&num);
	rem=num%2;
	{
		if(rem==1)
		{
			printf("\n the number is odd");
		}
		else
		{
			printf("\n the number is even");
		}
	}
}
