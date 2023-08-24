//WAP to create atext file

#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	char ch;
	int count=0;
	fp=fopen("HELLO.TXT","w");
	printf("Type the text and press enter key:\n");
	while((ch=getchar())!='\n')
	{
		putc(ch,fp);
	}
	fclose(fp);
	
	fp=fopen("HELLO.TXT","r");
	printf("\n\nThe content:\n");
	while(!feof(fp))
	{
		ch=getc(fp);
		printf("%c",ch);
		switch(toupper(ch))
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': count++;
			          break;	
		}
	}
	printf("\n\nNo of vowels=%d",count);
	fclose(fp);
	
	
}
