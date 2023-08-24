#include<stdio.h>
void main()
{
	int num,rem,sum=0,temp;
	printf("\n Enter the value : ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
    if(sum==temp)
	{
		printf("\n An Armstrong Number",sum);
	}
	else
	{
		printf("\n Not an Armstrong Number",sum);
	}
}
