#include<stdio.h>

int main()
{
	int n ,i=1;
	
	printf("\nEnter the Number : ");
	scanf("%d", &n);
	
	printf("\n----------The Multiplication Table of %d----------\n", n);
	while(i<=10)
	{
		printf("\n %d X %d = %d \n", n, i, n*i);
		i++;
	}
	return 0;
}
