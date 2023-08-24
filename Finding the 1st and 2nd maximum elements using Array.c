#include<stdio.h>
#include<math.h>
int main()
{
	int arr[8],i,max,second_max,p,t;
	printf("Enter the array elements :\n");
	for(i=0;i<8;i++)
	{
		//printf("\narr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	max=arr[0];p=0;
	for(i=1;i<8;i++)
	{
		if(max<arr[i])
		max=arr[i];
		p=i;
	}
	printf("maximum=%d",max);
	t=arr[p];
	arr[p]=arr[0];
	arr[0]=t;
	second_max=arr[1];
	for(i=2;i<8;i++)
	{
		if(second_max<arr[i])
		   second_max=arr[i];
	}
	printf("\n2nd maximum=%d",second_max);
	return(1);
}
