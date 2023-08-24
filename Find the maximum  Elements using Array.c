#include<stdio.h>
#include<math.h>
int main()
{
	int arr[8],i,max;
	printf("Enter the array elements");
	for(i=0;i<8;i++)
	{
		printf("\narr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=1;i<8;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	printf("maximum=%d",max);
	return(1);
}
