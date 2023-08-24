#include<stdio.h>
void main()
{
	char nam[50];
	int i,tmp,ln,j;
	
	printf("Enter a name : ");
	scanf("%s",nam);
	
	ln=strlen(nam);
	for(i=0;i<ln-1;i++)
	{
		for(j=0;j<ln-i-1;j++)
		{
			if(nam[j]>nam[j+1])
			{
				tmp=nam[j];
				nam[j]=nam[j+1];
				nam[j+1]=tmp;
			}
		}
	}
	printf("Sorted Characters are : %s",nam);
	
}
