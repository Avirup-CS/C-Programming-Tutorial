#include<stdio.h>


int main()
{
	int marks;

	printf("\nEnter your marks: ");
	scanf("%d", &marks);
	
	
	if(marks >= 90)
	{
		printf("\nHello Your Marks is %d and Grade is : A", marks);
	}
	else if(marks>= 80 && marks <90)
	{
		printf("\nHello Your Marks is %d and Grade is : B", marks);
	}
	else if(marks>= 70 && marks <80)
	{
		printf("\nHello Your Marks is %d and Grade is : C", marks);
	}
	else if(marks>= 60 && marks <70)
	{
		printf("\nHello Your Marks is %d and Grade is : D", marks);
	}
	else if(marks>= 45 && marks <60)
	{
		printf("\nHello Your Marks is %d and  Grade is : E", marks);
	}
	else if(marks<45)
	{

	    printf("\nHello your Marks is %d and You are Fail!!!!!", marks);
	}
	
	
	return 0;
}


