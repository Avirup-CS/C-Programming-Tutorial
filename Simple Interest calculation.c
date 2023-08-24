#include<stdio.h>

int main()
{
	int principal, rate, years;
	int SimpleInterest;
	
	printf("\nEnter the principal: ");
	scanf("%d",&principal);
	
	printf("\nEnter the rate: ");
	scanf("%d",&rate);
	
	printf("\nEnter the years: ");
	scanf("%d",&years);
	
	SimpleInterest= (principal*rate*years)/100;
	
	printf("\nThe Simple interest is %d", SimpleInterest);
	return 0;
}
