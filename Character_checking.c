#include<stdio.h>

int main()
{
	char ch;
	
	printf("\n Enter a character: ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("\n '%c' is a Upper case character",ch);
		printf("\n\n Lower case of this character is: %c", ch+32);
		
	}
	
	else
	{
		printf("\n '%c' is a Lower case character",ch);
		printf("\n\n Upper case of this character is: %c", ch-32);
	}
	
	return 0;
}


