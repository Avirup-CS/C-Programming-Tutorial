//Pointer

#include<stdio.h>
//call by reference
int main()
{
	int a=10,b=20;
	
	printf("Values of a and b : %d %d",a,b);
	
	swap(&a,&b);
	
	printf("\n\nValues of a and b : %d %d",a,b);
	
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

