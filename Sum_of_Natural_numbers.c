#include<stdio.h>

int main()
{
	
	int i=1, sum=0, n;
	
	printf("\n Enter the number: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum += i;
		i++;
	}
	
	printf("\nThe Sum of first %d Natural numbers = %d", n, sum);
	return 0;
}
