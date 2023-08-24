#include<stdio.h>

int main()
{
	int var,i;
	
	for(i=0;i<20;i++)
	{
		printf("%d\n",i);
		printf("Enter the value: ");
		scanf("%d",&var);
		
		if(var>=10)
		break;
	}

	return 0;
}

