#include<stdio.h>
void main()
{
	char nam[50],tmp;
	int i;
	
	printf("Enter a name : ");
	gets(nam);
	
	printf("Abbreviation form is : \n");
	printf("%c",nam[0]);
	for(i=1; nam[i]!='\0'; i++)
	{
		if(nam[i]==' ')
		{
			if(nam[i+1]==' ')
			continue;
			
			printf(".%c",nam[i+1]);
			tmp=i;
		}
	}
	for(i=tmp+2;nam[i]!='\0'; i++)
	{
		printf("%c",nam[i]);
    }
}

