#include<stdio.h>
int main()
{
	int arr[50][50];
	int array[][3]={1,2,3,4,5,6};
	int p,q,r,col;
	int t;
	printf("\nEnter the elements in 2D array\n");
	printf("\nEnter the number of rows and columns: ");
	scanf("%d %d",&r,&col);
	for(p=0;p<r;p++)
	{
		for(q=0;q<col;q++)
		{
			scanf("%d",&arr[p][q]);
		}
	}
	printf("\nThe Entered Matrix is as follows :\n");
	for(p=0;p<r;p++)
	{
		for(q=0;q<col;q++)
		{
			printf("\t%d",arr[p][q]);
		}
		printf("\n");
	}
	for(p=0;p<r;p++)
	{
		for(q=p;q<col;q++)
		{
			t=arr[p][q];
			arr[p][q]=arr[q][p];
			arr[q][p]=t;
		}
	}
	printf("\nThe Transposed Matrix is :\n");
	for(p=0;p<r;p++)
	{
		for(q=0;q<col;q++)
		{
			printf("\t%d",arr[p][q]);
		}
	printf("\n");	
    }
    
    
    
    
    
    

}

