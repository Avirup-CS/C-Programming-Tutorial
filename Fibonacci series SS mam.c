#include<stdio.h>
void main()
{
	int i,n,a=0,b=1,s;
	printf("\n Enter the value of n: ");
	scanf("%d",&n);
	printf("\n Fibonacci series. . . .\n");
	printf("%d ,%d ,",a,b);
	s=a+b;
	while(s<=n)
	{
		printf("\t%d",s);
		a=b;
		b=s;
		s=a+b;
	}
}
