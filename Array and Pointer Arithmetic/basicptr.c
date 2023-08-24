#include<stdio.h>

int main()
{
    int a=10;
	int *ptr;
	char *x;
	char k='t';
	
	ptr=&a;
	x=&k;
	
	//for integer
	printf("%d\n",&a);
	printf("%d\n",ptr);
	ptr++;
	printf("%d\n",ptr);
	
	// for characater
	//printf("%d\n",x);
	//x++;
	//printf("%d\n",x); 
	
	return 0;
}

