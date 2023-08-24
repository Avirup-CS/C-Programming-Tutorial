#include<stdio.h>
void main()
{
	int num,rem,rev=0,temp;
	printf("\n Enter the value : ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==temp)
	{
		printf("\n Reverse Number");
	}
	else
	{
		printf("\n Not Reverse Number");
	}
}
