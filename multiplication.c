#include<stdio.h>

int main()
{
	int i,n,c;
	
	do
	{
		printf("\nEnter the number you want the multiplication table of: ");
	    scanf("%d",&n);

	    printf("\n\nThe multiplication table of  %d is ---->\n",n);
		
		for(i=1;i<=10;i++)
	    {
		    printf("\n%d X %d = %d", n,i,n*i);
	    }
	    
	    printf("\n-------------------------------------------------------------\n");
	    
	    printf("\n\nDo you want to continue for any number(Yes-1/No-0): ");
	    scanf("%d",&c);
	    
	}while(c!=0);
	
	

	return 0;
}

