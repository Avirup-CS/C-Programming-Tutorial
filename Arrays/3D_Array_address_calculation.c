#include<stdio.h>

int main()
{
	int i,j,k;
	int arr[2][3][5];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<5;k++)
			{
				printf("\nThe address of a[%d][%d][%d] is %u",i,j,k, &arr[i][j][k]);
			}
		}
	}
	return 0;
}
