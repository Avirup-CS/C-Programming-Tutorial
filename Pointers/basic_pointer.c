#include<stdio.h>

int main()
{
	int a=5;
	int *ptr;
	int **k;
	
	ptr=&a;
	k=&ptr;
	
	
	printf("\nThe value of a is : %d",*ptr);
	printf("\nThe address of a is : %d",ptr);
	printf("\nThe address of ptr is : %d",&ptr);
	printf("\nThe address of a is : %d",&a);
	printf("\nThe value of a is : %d",**k);
	printf("\nThe value of a is : %d",*k);


	return 0;
}

