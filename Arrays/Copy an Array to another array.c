#include<stdio.h>

int main()
{
	int a[3],b[3],i,n;
	
	printf("\nEnter the size: ");
	scanf("%d",&n);
	
	printf("\nEnter the elemnts for the 1st input......\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe elemnts for the 1st input array......\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);	
	}
	
	printf("\n----------------------------------------------------\n");
	
	//Coping the array into another array
	for(i=0;i<n;i++)
	{
		b[i] = a[i];
	}
	
	printf("\nAfter copying the 2nd array is ------->\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	
	
	


	return 0;
}

