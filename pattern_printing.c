#include<stdio.h>
int pattern(int n);

int main()
{
	int n;
	printf("\nEnter the value :");
	scanf("%d",&n);
	
	pattern(n);
	
	return 0;
}

int pattern(int n)
{
	int i;

	if(n==1)
	{
		printf("*\n");
	}
	else
	{
	
	pattern(n-1);
	for(i=0;i<(2*n-1);i++)
	{
		printf("*");
	}
		printf("\n");
	}
		
	
	
	
	
	
}
