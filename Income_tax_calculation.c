#include<stdio.h>

int main()
{
	float income, tax=0;
	
	printf("\nEnter your Income : ");
	scanf("%f", &income);
	
	if(income>250000 && income<500000)
	{
		tax = tax + 0.05*(income-250000);
	}
	
	if(income>500000 && income<1000000)
	{
		tax = tax + 0.10*(income-500000);
	}
	
	if (income>1000000)
	{
		tax = tax + 0.20*(income-1000000);
	}
	
	printf("\n\nThe amount of tax is paid by you : %f", tax);
	
	printf("\n\nYour Net Income after giving Tax : %f", income-tax);
	
	return 0;
}

