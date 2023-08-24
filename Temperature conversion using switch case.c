#include<stdio.h>
void main()
{
	float F,C;
	int i;
	printf("1.Fahrenheit to Centigrade. \n2.Centigrade to Fahrenheit.\n");
	printf("Enter your choice: ");
	scanf("%d",&i);
	switch(i)
	{
		case 1: printf("Enter Fahrenheit Temperature : ");
		        scanf("%f",&F);
		        C=(5.0/9.0)*(F-32);
		        printf("Centigrade Temperatue= %f",C);
		        break;
		case 2: printf("Enter Centigrade Temperature : ");
		        scanf("%f",&C);
		        F=((C*9.0)/5.0);+32;
		        printf("Fahrenheit Temperatue= %f",F);
		        break;
		default:printf("Wrong choice");        
	}
}
