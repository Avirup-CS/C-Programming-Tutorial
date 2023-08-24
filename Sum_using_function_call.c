#include<stdio.h>

int sum(int a, int b); // Function Prototype


int main()
{
	int a,b;
	int result;
	printf("\nEnter the value for a: ");
	scanf("%d",&a);
	
	printf("\nEnter the value for b: ");
	scanf("%d",&b);
	
	result = sum(a,b);  //Function Call
	
	printf("\nThe sum of %d and %d is = %d",a,b,result);
	return 0;
}


int sum(int a, int b) //Function Definition
{
	int c;
	
	c = a+b;
	
	return c;
}
