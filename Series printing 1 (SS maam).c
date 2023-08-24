//s=1+1/2+1/3+...+1/n

#include<stdio.h>
void main()
{
	int i,n;
	float sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
		{
			sum=sum+(1.000/i);
		}
    printf("Total sum=%.3f",sum);
}
