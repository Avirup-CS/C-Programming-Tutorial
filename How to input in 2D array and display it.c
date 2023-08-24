
//How to input in 2D array and display it

#include<stdio.h>
void main()
{
	int a[3][3],i,j;
	printf("Enter elements in 2D array\n");
	for(i=0;i<3;i++)
    {
	  for(j=0;j<3;j++)
	  {
	  	printf("Enter a[%d][%d]th value:",i,j);
		scanf("%d",&a[i][j]);
	  }
    }
    printf("The 2D array is \n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
