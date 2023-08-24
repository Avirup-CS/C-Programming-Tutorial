#include<stdio.h>

int main()
{
	int num;
	int a[] = { 1 , 2, 3, 4, 5, 6, 7 };
	
	num = sizeof(a)/(sizeof(a[0]));
	
	printf("\nThe numbers in the array : %d",num);
	

	return 0;
}

