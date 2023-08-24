#include<stdio.h>

int main()
{
	int celcius; 
	float farhenhite;
	
	printf("\nEnter the value of temperature in celcius : ");
	scanf("%d", &celcius);
	
	farhenhite= celcius * 9 / 5 + 32;
	
	printf("\nThe value of celcius temperature %d is in farhenhite: %.2f", celcius, farhenhite);
	return 0;
	
}
