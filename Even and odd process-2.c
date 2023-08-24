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
		if (a>b && a>c)
		{
			printf("\n%d is Maximum",a);
		}
		if (b>c && b>a)
		{
			printf("\n%d is Maximum",b);
		}
		if (c>a && c>b)
		{
			printf("\n%d is Maximum",c);
		}
    }
	else
	{
	printf("\nThey are Equal");
	}
}

