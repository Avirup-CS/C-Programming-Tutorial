#include<stdio.h>

void reverse(int *arr, int k)
{
	int i, temp;
	for(i=0;i<(k/2);i++)
	{
		temp = arr[i];
		arr[i] = arr[k-i-1];
		arr[k-i-1] = temp;
	}
}
int main()
{
	int arr[10],n,i;
	
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
	
	reverse(arr,n);
	
	printf("\nThe elements in reverse order .............\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	
	
	return 0;
}
