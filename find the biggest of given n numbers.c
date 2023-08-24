// find the biggest of given n numbers

#include<stdio.h>
void main()
{
	int n,a[20],i,big;
	printf("How many numbers: ");
	scanf("%d",&n);
	printf("Enter all the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The numbers are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	big=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
	}
    printf("\nThe biggest number is=%d",big);
}
