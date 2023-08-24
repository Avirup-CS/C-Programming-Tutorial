#include<stdio.h>
#include<string.h>

struct employee
{
	int code;
	float salary;
	char name[15];
};

void show(struct employee emp)
{
	printf("\nThe Employee name is : %s",emp.name);
	printf("\nThe Employee code is : %d",emp.code);
	printf("\nThe Employee salary is : %.2f",emp.salary);
}


int main()
{
	struct employee e1;
	struct employee *ptr;
	
	ptr = &e1;
	
	ptr->code = 120;
	ptr->salary = 12.360;
	strcpy(ptr->name, "Rohan");
	
	show(e1);
	
	return 0;
}

