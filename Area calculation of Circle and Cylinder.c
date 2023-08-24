#include<stdio.h>

int main()
{
	int radius, height;
	float pi = 3.14; 
	
	printf("\nEnter the radius : ");
	scanf("%d",&radius);
	
	printf("\nEnter the height : ");
	scanf("%d",&height);
	
	printf("\nThe area of Circle is : %.2f", pi*radius*radius);
	
	printf("\nThe area of Cylinder is : %.2f", pi*radius*radius*height);
	return 0;
	
}
