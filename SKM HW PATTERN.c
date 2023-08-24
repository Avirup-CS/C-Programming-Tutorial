#include<stdio.h>
void main()
{
	int c,i,j,k,n,l;
	printf("1.Pattern-1 \n\n2.Pattern-2\n\n");
	printf("Enter your choice : ");
	scanf("%d",&c);
	switch(c)
	{
	case 1: printf("\nEnter the line no to make it: ");
	        scanf("%d",&n);
	        for(i=1;i<=n;i++)
	        {
		      for(k=n;k>=i;k--)
		      {
			   printf(" ");
		      }
		      for(j=1;j<=i;j++)
		      {
			   printf(" %d",j);
		      }
	       printf("\n");	
	       }
	       break;
	case 2:  printf("\nEnter the line no to make it: ");
	        scanf("%d",&n);
	        for(i=1;i<=n;i++)
	        {
		      for(k=n;k>=i;k--)
		      {
			   printf(" ");
		      }
		      for(j=1;j<=i;j++)
		      {
			   printf(" %d",i);
		      }
	       printf("\n");	
	       }
	       break;     
	default: printf("\nWrong Choice");
    }
}
