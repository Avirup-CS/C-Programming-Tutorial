#include<stdio.h>

void Printarray(int arr[4][4], int m, int n)
{
	int i,j;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter the value of arr[%d][%d] : %d",i+1,j+1, arr[i][j]);
		}
	}
}


int main()
{
	int arr[4][4], i , j, m , n ;
	
	printf("\nHow many rows and columns that you want to print: ");
	scanf("%d %d",&m,&n);
		
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter the value of arr[%d][%d] : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	
	Printarray(arr, m, n);
	
	return 0;
}
