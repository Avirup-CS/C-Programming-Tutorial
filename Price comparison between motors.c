#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf("\n Enter the motor-price of Havells : ");
	scanf("%d",&a);
	printf("\n Enter the motor-price of Crompton : ");
	scanf("%d",&b);
	printf("\n Enter the motor-price of Usha : ");
	scanf("%d",&c);
	printf("\n Enter the Budget : ");
	scanf("%d",&d);
	if( d>a && d>b &&d>=c)
	{
	   printf("\n You should buy Usha. Because in your budget the motor is very good.");
	}
	else
	{
	   if(d>a && d<c && d>=b)
	   {
	   	printf("\n You should buy Crompton or Havells. but better is in your budget,Crompton,it is a medium quality of motor");
	   }
	   if(d<b && d<c && d>=a)
	   {
	   	printf("\n You should buy Havells. Because in your budget you will get low quality of motor");
	   }
	   if(d<a && d<b && d<c)
	   {
	   	printf("\n Your budget is too low to buy a motor. So increase yor budget.");
	   }
	}
	getch();
}

