#include<stdio.h>

int main()
{
	int year;
	
	printf("\nEnter the year: ");
	scanf("%d", &year);
	
	if((year%4==0 && year%100!=0) || year%400==0)
	{
		printf("\n%d is a Leap year", year);
	}
	else
	{
		printf("\n%d is not a Leap year", year);
	}
	return 0;
}


