//Passing 2D array as an argument

#include<stdio.h>
void main()
{
	int a[10][10],i,j,r,c;
	
	printf("Enter how many row and column u want to input : ");
	scanf("%d%d", &r,&c);
	
	printf("Enter all elements : ");
	for(i=0;i<r;i++)
	{
	  	for(j=0;j<c;j++)
	    scanf("%d",&a[i][j]);
	}
	
	transpose(a,r,c);   
}

void transpose(int a[10][10], int r, int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%3d",a[j][i]);
		}
		printf("\n");
	}
}
