#include<stdio.h>


typedef struct Driver
{
	char name[25];
	char dlno[25];
	char route[25];
	int kms;
	
}dr;


int main()
{
	dr dr1,dr2,dr3;
	
	printf("\nEnter the information for all drivers:\n");
	
	printf("For Driver-1:\n");
	printf("Enter the Name: ");
	scanf("%s",&dr1.name);
	printf("Enter the Driving Lisence No.: ");
	scanf("%s",&dr1.dlno);
	printf("Enter the Route: ");
	scanf("%s",&dr1.route);
	printf("Enter the Kms: ");
	scanf("%d",&dr1.kms);
	printf("\n--------------------------------------------------\n");
	
	printf("For Driver-2:\n");
	printf("Enter the Name: ");
	scanf("%s",&dr2.name);
	printf("Enter the Driving Lisence No.: ");
	scanf("%s",&dr2.dlno);
	printf("Enter the Route: ");
	scanf("%s",&dr2.route);
	printf("Enter the Kms: ");
	scanf("%d",&dr2.kms);
	printf("\n--------------------------------------------------\n");
	
	printf("For Driver-3:\n");
	printf("Enter the Name: ");
	scanf("%s",&dr3.name);
	printf("Enter the Driving Lisence No.: ");
	scanf("%s",&dr3.dlno);
	printf("Enter the Route: ");
	scanf("%s",&dr3.route);
	printf("Enter the Kms: ");
	scanf("%d",&dr3.kms);
	printf("\n--------------------------------------------------\n");
	printf("\n--------------------------------------------------\n");
	
	
	printf("\n*****************The Information of Drivers:******************\n");
	printf("\nFor Driver - 1:\n");
	printf("\nThe Name is : %s",dr1.name);
	printf("\nThe Driving Lisence No.: %s",dr1.dlno);
	printf("\nThe Route is: %s",dr1.route);
	printf("\nThe Kms are : %d",dr1.kms);
	printf("\n--------------------------------------------------\n");
	
	printf("\nFor Driver - 2:\n");
	printf("\nThe Name is : %s",dr2.name);
	printf("\nThe Driving Lisence No.: %s",dr2.dlno);
	printf("\nThe Route is: %s",dr2.route);
	printf("\nThe Kms are : %d",dr2.kms);
	printf("\n--------------------------------------------------\n");
	
	printf("\nFor Driver - 3:\n");
	printf("\nThe Name is : %s",dr3.name);
	printf("\nThe Driving Lisence No.: %s",dr3.dlno);
	printf("\nThe Route is: %s",dr3.route);
	printf("\nThe Kms are : %d",dr3.kms);
	printf("\n--------------------------------------------------\n");
	

	return 0;
}

