#include<stdio.h>
void main()
{
	int i,n,a=0,b=1,s;
	printf("\n Enter the value of n: ");
	scanf("%d",&n);
	printf("\n Fibonacci series. . . .\n");
	printf("%d ,%d ,",a,b);
	for(i=1;i<=n;i++)
	{
		s=a+b;
		printf("%d, ",s);
	    a=b;
	    b=s;
	}
}
