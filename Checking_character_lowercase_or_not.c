#include<stdio.h>

int main()
{
	char ch;
	
	printf("\nEnter the character: ");
	scanf("%c", &ch);
	
	if(ch>=97 && ch<=122)
	{
		printf("\nIt is a lower case character.");	
	}
	else
	{
		printf("\nIt is a not lower case character.");
	}
	return 0;
}


