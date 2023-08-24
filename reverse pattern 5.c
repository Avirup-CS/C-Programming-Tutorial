#include <stdio.h>
void main()
{
	int i,j,n,k,l=1; // line taken as input
	printf("How many lines to print : ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++) //  for space printing
		{
			printf("    ");
		}
		for(k=1;k<=i;k++) // for number to print
		{
			printf("%4d",l%2);
			l++;
	    }
		printf("\n");
	}
}
