#include<stdio.h>
#include<string.h>

struct player
{
	int goal;
	float salary;
	char name[10];
};


int main()
{
	struct player a1;
	a1.goal = 50;
	a1.salary = 13.256;
	strcpy(a1.name,"Lionel Messi");
	
	
	struct player a2;
	a2.goal = 35;
	a2.salary = 10.31;
	strcpy(a2.name,"Cristiano Ronaldo");
	
	
	printf("\nThe player name is : %s",a1.name);
	printf("\nThe player salary is : %.2f",a1.salary);
	printf("\nThe player's Goal is : %d",a1.goal);
	
	printf("\n........................................\n");
	
	printf("\nThe player name is : %s",a2.name);
	printf("\nThe player salary is : %.2f",a2.salary);
	printf("\nThe player's Goal is : %d",a2.goal);
	
	return 0;
}

