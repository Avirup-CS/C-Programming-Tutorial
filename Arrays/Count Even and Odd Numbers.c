#include<stdio.h>

int main()
{
	int ar[5],i,n,even_count=0,odd_count=0;
	
	printf("\nEnter the size: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	for(i=0;i<n;i++)
	{
		
	   if(ar[i] % 2 == 0)
	   {
		   even_count++;
	   }  
	   else
	   {
		   odd_count++;
	   }
    }
	
	printf("\nThe Number of Even elements are  = %d ",even_count);
	printf("\nThe Number of Odd elements are  = %d ",odd_count);

	return 0;
}

