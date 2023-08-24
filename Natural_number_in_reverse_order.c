#include<stdio.h>

int main()
{
	int n, i;
	
	printf("\nEnter the number : ");
	scanf("%d", &n);
	
	printf("\nThe Natural numbers in reverse order......\n");
	for(i=n ; i ; i--)
	{
		printf("\nThe number is : %d \n", i);
	}
	return 0;
}
