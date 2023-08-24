#include <stdio.h>
void TestInitialization();
void PRint();
void main()
{
	 static int  a,b; // default initialization is zero '0'
		// static  specifies static storge class
		// int is a data type
		// a is a variable name 
		printf("Value of a = %d %d", a,b);
		// type of initialization  
		TestInitialization(); //25
		TestInitialization(); //125
		TestInitialization(); //625
		TestInitialization(); //3125
		// scope 
		PRint();
}
/* example of one time initialization */

void TestInitialization()
{	
	static int x=5; // one time initialization 
	x=x*5;
	printf("\n\nThe value of x = %d",x);
	
}
void PRint()
{

	printf (" \n\nThe value of a & b are inaccessable in this function ");
}

