#include<stdio.h>
#include<string.h>

typedef struct student
{
	char name[20];
	int roll;
	int age;
}std;


int main()
{
	std s1;
	
	strcpy(s1.name,"Rohan");
	s1.roll = 85;
	s1.age =  20;
	
	printf("%s\n",s1.name);
	printf("%d\n",s1.roll);
	printf("%d\n",s1.age);
	

	return 0;
}

