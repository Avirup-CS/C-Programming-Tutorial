#include<stdio.h>

int main()
{
	int i=2;
	int *ptr=&i;
	
	printf("\nThe address of ptr : %u", ptr);
	ptr++;
	ptr++;
	printf("\nThe address of ptr : %u", ptr);
	//printf("\nThe address of i : %u", &i);

	return 0;
}
