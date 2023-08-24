#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\n Enter the value of a: ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
    printf("\n Enter the value of c : ");
	scanf("%d",&c);
	if (a!=b && b!=c && c!=a)
	{
		if (a>b)
		{
			if(a>c)
			{
				printf("\n%d is maximum",a);
			}
			else
			{
			printf("\n%d is maximum",c);	
			}
		}
	    else 
	    {
	        if(b>c)
			{
			printf("\n%d is maximum",b);	
			}
			else
			{
			    printf("\n%d is maximum",c);	
			}	
		}
	}
	else
	{
		printf("\nThey are Equal");
	} 
}
