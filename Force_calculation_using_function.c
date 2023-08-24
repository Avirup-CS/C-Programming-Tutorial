#include<stdio.h>

float force( float mass);

int main()
{
	float m;
	
	printf("\nEnter the value of mass in kgs: ");
	scanf("%f",&m);
	
	printf("\nThe value of Force is = %.2f N", force(m));	
	return 0;
}


float force( float mass)
{
	float result;
	
	result = mass * 9.8;
	
	return result;
}
