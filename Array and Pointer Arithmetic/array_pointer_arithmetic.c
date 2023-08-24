#include<stdio.h>

int main()
{
	int arr[] = {5,6,8,3,4,6};
	
	printf("The address of the first element of the array is--> %d\n",&arr[0]);
	printf("The address of the first element of the array is--> %d\n",arr);
	
	//Types of printing array elements using address
	printf("The value at address of the first element of the array is--> %d\n",*(&arr[0]));
	printf("The value at address of the first element of the array is--> %d\n",*(arr));
	printf("The value at address of the first element of the array is--> %d\n",arr[0]);
	
	printf("-----------------------------------------------------------------\n");
	
	printf("The address of the first element of the array is--> %d\n",&arr[2]);
	printf("The address of the first element of the array is--> %d\n",arr+2);
	
	//Types of printing array elements using address
	printf("The value at address of the first element of the array is--> %d\n",*(&arr[2]));
	printf("The value at address of the first element of the array is--> %d\n",*(arr+2));
	printf("The value at address of the first element of the array is--> %d\n",arr[2]);

    //arr++; // we can't increment the original array, it will throw an error 
	return 0;
}

