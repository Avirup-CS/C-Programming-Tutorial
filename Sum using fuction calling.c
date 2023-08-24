#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the values : ");
	scanf("%d%d",&a,&b);
	
	addition(a,b);
}

void addition(int x, int y)
{
	int c;
	c=x+y;
	
	printf("The result is %d",c);
}
