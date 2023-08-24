#include<stdio.h>

int main()
{
	int marks[4],i;
	int *ptr;
	ptr= &marks[0];
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter the value of marks for student-%d: ",i+1);
		scanf("%d",ptr);
		ptr++;
	}
	
	for(i=0;i<4;i++)
	{
		printf("\nThe value of marks for student-%d is : %d",i+1,marks[i]);
	}
	return 0;
}
