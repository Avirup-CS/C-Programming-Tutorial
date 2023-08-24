#include<stdio.h>
#include<stdlib.h>

triangle_star(int num)
{
	int i,j;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

rev_triangle_star(int num)
{
	int i,j;
	for(i=1;i<=num;i++)
	{
		for(j=num;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}



int main()
{
	int i,j,n,ch,c;
	
	printf( "\nHow many stars do you want to print: ");
	scanf("%d",&n);
	
	do
	{
	    printf("\n--------------------------------------------------");
	    printf("\nPress 1 for Triangular star pattern");
	    printf("\nPress 2 for Reverse Triangular star pattern");
	    printf("\nPress 3 for Exit");
	    printf("\n--------------------------------------------------\n\n");
	    
	    printf("\nEnter your choice: ");
	    scanf("%d",&ch);
		
	    switch(ch)
	    {
		    case 1  :   triangle_star(n);
		                break;
		           
		    case 2  :   rev_triangle_star(n);
		                break;
		
		    case 3  :   exit(0);
		                break;  
		 
		    default :   printf("\nWrong choice!");
		                break;         
	    }
	    
	    printf("\nDo you want to continue(Yes-1 / No-0): ");
	    scanf("%d",&c);
	
    }while(c!=0);

	return 0;
}

