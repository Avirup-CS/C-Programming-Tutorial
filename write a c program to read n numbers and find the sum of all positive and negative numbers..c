//write a c program to read n numbers.
//Find the sum of all positive and negative numbers.
#include<stdio.h>
void main()
{
	int n,a[20],i,positive=0,negative=0;
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
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
       {
       	positive=positive+a[i];
	   }
	   else
	   {	
	   	negative=negative+a[i];
	   }
	}
	printf("\nTotal of positive sum=%d",positive);
	printf("\nTotal of negative sum=%d",negative);
}
