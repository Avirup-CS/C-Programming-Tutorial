#include <stdio.h>
void TestInitialization();
void PRint();
void main()
{
	 auto int  a,b; // default initialization is zero '0'
		// static  specifies static storge class
		// int is a data type
		// a is a variable name 
		printf("Value of a = %d %d", a,b);
		// type of initialization  
		TestInitialization(); //25
		TestInitialization();//25
		TestInitialization(); //25
		TestInitialization(); //25
		// scope 
		PRint();
}
/* example of frequent initialization */

void TestInitialization()
{	
	int x=5; // 5 will be initializes frequently
	printf("\n\nThe value of x = %d",x*5);
}
void PRint()
{

	printf (" \n\nThe value of a & b are inaccessable in this function ");
}

