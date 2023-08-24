
#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],i,j,k,subtraction[3][3];
	printf("\nEnter elements in 2D array in 1st Matrix\n");
	for(i=0;i<3;i++)
    {
	  for(j=0;j<3;j++)
	  {
	  	printf("Enter a[%d][%d]th value:",i,j);
		scanf("%d",&a[i][j]);
	  }
    }
    printf("\nThe 1st Matrix is \n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEnter elements in 2D array in 2nd Matrix\n");
	for(i=0;i<3;i++)
    {
	  for(j=0;j<3;j++)
	  {
	  	printf("Enter b[%d][%d]th value:",i,j);
		scanf("%d",&b[i][j]);
	  }
    }
    printf("\nThe 2nd Matrix is \n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\nThe Subtraction of Matrix is \n");
	for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    	{
		subtraction[i][j]=a[i][j]-b[i][j];	
		printf("%d\t",subtraction[i][j]);
		}  
		printf("\n");
	}

}
