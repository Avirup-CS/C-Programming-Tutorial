#include<stdio.h>

int main()
{
	int n1, n2, n3, n4;
	
	printf("\nEnter the 4 Numbers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	
	if(n1==n2 || n1==n3 || n1==n4 || n2==n3 || n2==n4)
	{
		printf("\nYou Entered same numbers as input !! please enter 4 different numbers to find the greatest........... ");
	}
	
	else
	{
		
	
	if(n1>n2)
	{
		if(n1>n3 && n1>n4)
		{
			printf("\n %d is the Greatest number.", n1);
		}
		else if(n1>n3 && n1<n4)
		{
			printf("\n %d is the Greatest number.", n4);
		}
		else if(n1<n3 && n1>n4)
		{
			printf("\n %d is the Greatest number.", n3);
		}
		else if(n1<n3 && n1<n4)
		{
			if(n3>n4)
			{
				printf("\n %d is the Greatest number.", n3);
			}
			else
			{
				printf("\n %d is the Greatest number.", n4);
			}
		}
	}
	
	
	
	else
	{
		if(n2>n3 && n2>n4)
		{
			printf("\n %d is the Greatest number.", n2);
		}
		else if(n2>n3 && n2<n4)
		{
			printf("\n %d is the Greatest number.", n4);
		}
		else if(n2<n3 && n2>n4)
		{
			printf("\n %d is the Greatest number.", n3);
		}
		else if(n2<n3 && n2<n4)
		{
			if(n3>n4)
			{
				printf("\n %d is the Greatest number.", n3);
			}
			else
			{
				printf("\n %d is the Greatest number.", n4);
			}
		}
	}
	
    }
	return 0;
}

