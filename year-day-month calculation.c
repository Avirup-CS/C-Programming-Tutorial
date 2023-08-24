#include<stdio.h>
void main()
{
	int y,m,d;
	printf("Enter the Day: ");
	scanf("%d",&d);
	y=d/365;
	d=d%365;
	m=d/30;
	d=d%30;
	printf("Year: %d, Month: %d, Day=%d",y,m,d);
}
