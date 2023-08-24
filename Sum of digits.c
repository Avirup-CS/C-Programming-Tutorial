#include<stdio.h>
void main()
{
	int num,rem,sum=0;
	printf("\n Enter the value : ");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;// finding the remainder
		sum=sum+rem;//  update the sum
		num=num/10;// update num by quotient 
	}
	printf("\n The Sum of Digits : %d",sum);
}
