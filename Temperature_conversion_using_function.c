//Write a function to convert Celcius temperature into fahrenheit.

float temp_convertor(float x);

#include<stdio.h>

int main()
{
	float c, f;
	
	printf("\nEnter the temperature in Celcius: ");
	scanf("%f", &c);
	

	printf("\nThe Converted temperature in Fahrenheit is :  %.1f", temp_convertor(c));
	
	return 0;
}

float temp_convertor(float x)
{
	float convert;
	
	convert = x * 9 / 5 + 32;
	
	return convert;
	
}
