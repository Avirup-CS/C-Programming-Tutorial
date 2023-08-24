#include<stdio.h>

int main()
{
	int arr[2][3]={{2,6,5},{4,9,6}};
	
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nThe element of %d,%d index is --> %d",i,j,arr[i][j]);
		}
	}

	return 0;
}

