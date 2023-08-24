#include<stdio.h>

int main()
{
	int ar[5],i,n,pos_count=0,neg_count=0;
	
	printf("\nEnter the size: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	for(i=0;i<n;i++)
	{
		
	   if(ar[i] > 0)
	   {
		   pos_count++;
	   }  
	   else
	   {
		   neg_count++;
	   }
    }
	
	printf("\nThe Number of Positive elements are  = %d ",pos_count);
	printf("\nThe Number of Negative elements are  = %d ",neg_count);

	return 0;
}

