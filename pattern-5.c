#include <stdio.h>
void main()
{
	int i,j,n,k=1;
	printf("How many lines to print : ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%4d",k%2,k++);
		}
		printf("\n");
		
	}
}
