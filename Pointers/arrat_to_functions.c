#include<stdio.h>

Arrayfunction(int *ptr, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nThe value of element-%d is : %d", i+1, *(ptr+i) );
	}
}


int main()
{
	int arr[]={25,10,3,96,35,78};
	
	Arrayfunction(arr,6);
	return 0;
}
