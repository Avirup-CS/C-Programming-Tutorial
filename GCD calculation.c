
//Recursion


#include<stdio.h>

void main()
{
	int a,b;
	printf("Enter two value of n : ");
	scanf("%d%d",&a, &b);
	
	GCD(a,b);
	
}

void GCD(int a, int b)
{
	while(a!=b)
	{
		if(a>b)
		   a=a-b;
		else
		   b=b-a;
	}
	
	printf("GCD IS : %d",a);
}

