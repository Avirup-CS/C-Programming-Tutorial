//Write a C Program to calculate area of a rectangle taking input from a user.

#include<stdio.h>

int main()
{
	int length, breadth, area;
	
	printf("\nEnter the lenghth of rectangle: ");
	scanf("%d",&length);
	
	printf("\nEnter the breadth of rectangle: ");
	scanf("%d",&breadth);
	
	area=length*breadth;
	
	printf("\nThe area of rectangle is : %d", area);

	
	return 0;
	
}
