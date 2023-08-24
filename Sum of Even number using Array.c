#include<stdio.h>
void main()
{
	int i,n,a[50],sum=0;
	printf("Enter how many values you want to input : ");
	scanf("%d",&n);
	printf("\nEnter all values : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
	}
	printf("\nSum of Even Elements are : %d",sum);
}
