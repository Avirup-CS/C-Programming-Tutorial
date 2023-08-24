#include<stdio.h>
void main()
{
	int i,n,f=1;
	printf("\n Enter value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("\nThe Factorial=  %d",f);
}
