#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,n,fact,k,x;
	float sum=0.0,rad;
	printf ("\n Enter the number of terms:");
	scanf("%d", &n);
	printf("\n Enter the value of x:");
	scanf("%d", &x);
	rad=0.0175*x;
	for(i=1,j=1 ; i<=n ; i++,j=j+2)
	{
		fact=1;
		for(k=1;k<=j;k++)
		{
			fact=fact*k;
		}
		sum+=(float)((pow(-1,i-1)*pow(rad,j))/fact);
	}
	printf ("\n The Result =%f", sum);
}

