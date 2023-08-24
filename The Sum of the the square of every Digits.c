#include<stdio.h>
void main()
{
	int num,rem,sum=0;
	printf("\n Enter the value : ");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+(rem*rem);
		num=num/10;
	}
	printf("\n The Sum of the the square of every Digits : %d",sum);
}
