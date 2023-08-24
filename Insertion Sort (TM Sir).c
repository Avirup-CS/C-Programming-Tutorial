#include<stdio.h>
void main()
{
	int arr[150],n,i,p,q,t;
	printf("\nEnter the number of elements in the array: ");
	scanf("%d",&n);
	printf("\nEnter the array\n");
	for(i=0;i<n;i++)
	{
		printf("\narr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(p=0;p<n-1;p++)
	{
		if(arr[p]>arr[p+1])
		{
			for(q=p;q>=0;q--)
			{
				if(arr[q]>arr[q+1])
				{
					t=arr[q];
					arr[q]=arr[q+1];
					arr[q+1]=t;
				}
			}
		}
		
	}
	printf("\nThe sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}
}
