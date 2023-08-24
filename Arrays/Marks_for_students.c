#include<stdio.h>

int main()
{
	int i,j, marks[2][4];
	int students=2 , subjects=4;
	
	for(i=0;i<students;i++)
	{
		for(j=0;j<subjects;j++)
		{
			printf("\nEnter the marks of student-%d in subject %d : ",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
	}
	
	for(i=0;i<students;i++)
	{
		for(j=0;j<subjects;j++)
		{
			printf("\nThe marks of student-%d in subject %d is : %d",i+1,j+1,marks[i][j]);
		}
	}
	
	
	return 0;
}
