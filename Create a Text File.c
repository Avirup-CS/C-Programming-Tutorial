//WAP to create atext file

#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	char ch;
	fp=fopen("HELLO.TXT","w");
	printf("Type the text and press enter key:\n");
	while((ch=getchar())!='\n')
	{
		putc(ch,fp);
	}
	fclose(fp);
}
