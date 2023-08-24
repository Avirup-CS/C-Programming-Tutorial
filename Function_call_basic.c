#include<stdio.h>

void function1();
void function2();
void function3();

int main()
{
    function1();
    function2();
    function3();
	return 0;
}

void function1()
{
	printf("\nGood Morning\n");
}

void function2()
{
	printf("\nGood Afternoon\n");
}

void function3()
{
	printf("\nGood Night\n");
}
