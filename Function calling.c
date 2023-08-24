#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\nEnter the value of a and b : ");
	scanf("%d %d",&a,&b);
	
	c=addition(a,b);
	
	printf("\n\nThe sum is : %d",c);
}
int addition(int x, int y)
{
    int k;
	
	k=x+y;
	
	return(k);
}
