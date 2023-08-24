#include<stdio.h>

int fib_recursive(int n)
{
	if(n==1 || n==2)
	{
		return n-1;
	}
	else
	{
		return (fib_recursive(n-1)+fib_recursive(n-2));
	}
}

int fib_iteraive(int n)
{
	int a=0; 
	int b=1;
	int i;
	
	for(i=0;i<n-1;i++)
	{
		printf("\t%d",b);
		b=a+b;
		a=b-a;
	}
	
	return a;
}


int main()
{
	int num;
	
	printf("\nEnter the index to get fibonacci series: ");
	scanf("%d",&num);
	
	printf("\n\nThe value of fibonacci number at position no %d using iterative approach is = %d",num,fib_iteraive(num));
	
	printf("\n\nThe value of fibonacci number at position no %d using recursive approach is = %d",num,fib_recursive(num));

	return 0;
}

