#include<stdio.h>
void main()
{
	int a[10],i,sum=0;
	printf("Enter values in array :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array is\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of Elements in array= %d",sum);
}
