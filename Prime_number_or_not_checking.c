#include<stdio.h>

int main()
{
	int i=2, n , flag=0;
	
	printf("\nEnter the number: ");
	scanf("%d",&n);
	
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	
	if(flag==1)
	{
		printf("\n%d is a not Prime Number",n);
	}
	else
	{
		printf("\n%d is a Prime Number",n);
	}
	
	return 0;
}
