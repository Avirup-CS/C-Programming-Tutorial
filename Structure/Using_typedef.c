#include<stdio.h>
#include<string.h>

typedef struct employee
{
	int code;
	float salary;
	char name[15];
}emp;

void show(struct employee emp1)
{
	printf("\nThe Employee name is : %s",emp1.name);
	printf("\nThe Employee code is : %d",emp1.code);
	printf("\nThe Employee salary is : %.2f",emp1.salary);
}


int main()
{
	emp e1;
	emp *ptr;
	
	ptr = &e1;
	
	ptr->code = 120;
	ptr->salary = 12.360;
	strcpy(ptr->name, "Rohan");
	
	show(e1);
	
	return 0;
}

