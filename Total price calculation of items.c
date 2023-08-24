#include<stdio.h>
void main()
{
	int a[30],i,n,sum=0;
	printf("\nHow many items taken: ");
	scanf("%d",&n);
    printf("\nplease put the price of the items. . . . . .\n\n");
    for(i=0;i<n;i++)
    {
    	scanf("\t%d",&a[i]);
	}
	printf("\nthe price of items are . . . . . .  \n\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	for(i=0;i<n;i++)
    {
    	sum+=a[i];
	}
	printf("\a\n\nTotal price of all items: %d ",sum);
}
