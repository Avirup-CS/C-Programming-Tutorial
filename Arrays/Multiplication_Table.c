#include<stdio.h>

int main()
{
	int mul[10],n,i;
	
	printf("\nEnter the number that you want: ");
	scanf("%d",&n);
	
	for(i=0;i<10;i++)
	{
		mul[i] = n*(i+1);
 	}
 	
 	for(i=0;i<10;i++)
	{
		printf("\n%d X %d = %d", n,i+1,mul[i]);
 	}
 	
 	
	return 0;
}
