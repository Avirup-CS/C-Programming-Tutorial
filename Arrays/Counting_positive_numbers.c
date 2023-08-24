#include<stdio.h>

int findpositive(int arr[25], int n)
{
	int count=0,i,p;
	for(i=0;i<n;i++)
	{
		if( arr[i] > 0 )
		   count++;
	}
	
	return count;
	
}
int main()
{
	int arr[25],n,i,c;
	
	printf("\nHow many numbers you want to print : ");
	scanf("%d",&n);
	
	printf("\nEnter the numbers....\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nThe numbers are...............");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	
	c=findpositive(arr,n);
	
	printf("\nThere are %d positive numbers in the array.",c);
	
	return 0;
}
