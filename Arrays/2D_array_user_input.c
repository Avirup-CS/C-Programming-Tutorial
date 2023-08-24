#include<stdio.h>

int main()
{
	int arr[2][3];
	
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the element of %d,%d index: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nThe element of %d,%d index is --> %d",i,j,arr[i][j]);
		}
	}

	return 0;
}

