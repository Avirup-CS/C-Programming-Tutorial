#include<stdio.h>

void arrayRev(int arr[])
{
	
	int i,temp;
	for(i=0;i<(6/2);i++)
	{
		temp = arr[i];
		arr[i] = arr[6-i-1];
		arr[6-i-1] = temp;
	}
	
}
int main()
{
	int i;
	int arr[] = {1,2,3,4,5,6};
	
	printf("\nBefore reversing the array is . . .\n");
	for(i=0;i<6;i++)
	{
		printf("The %dth element is --> %d\n",i+1,arr[i]);
	}
	
	arrayRev(arr);
	
	printf("\nAfter reversing the array is . . .\n");
	for(i=0;i<6;i++)
	{
		printf("The %dth element is --> %d\n",i+1,arr[i]);
	}

	return 0;
}

