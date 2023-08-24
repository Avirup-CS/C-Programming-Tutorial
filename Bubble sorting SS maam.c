//Bubble sorting of some integers
#include<stdio.h>
void main()
{
	int a[10],i,j,swap;
	printf("Enter the Elements in array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The given array:\t");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<10-1;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
		}
	}
	printf("\n Sorted array:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
}
