#include<stdio.h>

void Printtable( int *arr, int num, int n)
{
	int i;
	
	printf("\nThe Multiplication Table of %d is :",num);
	
	for(i=0;i<n;i++)
	{
		arr[i] = num*(i+1);
 	}
 	
 	for(i=0;i<n;i++)
	{
		printf("\n%d X %d = %d", num,i+1,arr[i]);
 	}
 	
 	printf("\n*****************************************\n");
}

int main()
{
	int arr[3][10];
	
	Printtable( arr[0], 2 , 10 );
	Printtable( arr[1], 7 , 10 );
	Printtable( arr[2], 9 , 10 );
	return 0;
}
