
//Recursion


#include<stdio.h>

void main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	fun(n);
}

void fun(int no)
{
	if(no>0)
	{
		printf("\n%d", no);
		fun(no-1);
	}
}
