//Write a program to check whether a number is divisible  97 or not.
//Divisibility = 0 ( number is divisible)



#include<stdio.h>

int main()
{
	int num;
	
	printf("\nEnter the number: ");
	scanf("%d", &num);
	
	printf("\nDivisibility returns by the number : %d ", num%97);
	
	return 0;
	
}
