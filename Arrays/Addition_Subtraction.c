#include<stdio.h>

int main()
{
	int i,n,a[3],b[3];
	int add[3],sub[3];
	
	printf("\nEnter the size : ");
	scanf("%d",&n);
	
	//Accessing the array elements for a
	printf("\nEnter the elemnts for the 1st input......\n");
	for(i=0;i<n;i++)
	{
		printf("1st[%d]= ",i+1);
		scanf("%d",&a[i]);
	}
	
	
	//Accessing the array elements for b
	printf("\nEnter the elemnts for the 2nd input......\n");
	for(i=0;i<n;i++)
	{
		printf("2nd[%d]= ",i+1);
		scanf("%d",&b[i]);
	}
	
	printf("\n----------------------------------------------------\n");
	printf("\nThe 1st input is . . . . . .");
	
	//printing the array elements for a
	for(i=0;i<n;i++)
	{
		printf("\n1st[%d]= %d",i+1,a[i]);
	}
	
	printf("\n----------------------------------------------------\n");
	printf("\nThe 2nd input is . . . . . .");
	
	//printing the array elements for b
	for(i=0;i<n;i++)
	{
		printf("\n2nd[%d]= %d",i+1,b[i]);
	}
	
	printf("\n----------------------------------------------------\n");
	
	for(i=0;i<n;i++)
	{
		add[i] = a[i] + b[i];
		sub[i] = a[i] - b[i];
	}
	printf("\nThe result is . . . . . . . .\n");
	for(i=0;i<n;i++)
	{
	    printf("\nThe addition is = %d",add[i]);
	
	    printf("\nThe subtraction is = %d",sub[i]);
	    
	    printf("\n----------------------------------------------------\n");
	
    }
	return 0;
}

