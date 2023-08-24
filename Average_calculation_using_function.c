//Write a program using functions to find the average of three numbers.

#include<stdio.h>

float average_calulator(int x,int y,int z);

int main()
{
	int a,b,c;
	
	printf("\nEnter Three Numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	
	
	printf("\nThe average of %d, %d & %d is = %f", a, b, c, average_calulator(a,b,c));
	
	return 0;
}


float average_calulator(int x,int y,int z)
{
	float avg;
	
	avg = (float)(x+y+z)/3;
	
	return avg;
}
