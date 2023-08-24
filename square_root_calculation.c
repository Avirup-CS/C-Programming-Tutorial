#include<stdio.h>
#include<math.h>

float square_root(float a)
{
	printf("\nThe square root of the number of %.f is =  %.3f",a,sqrt(a));
}

int main()
{
    float n;
    printf("\nEnter the number you want square root of: ");
    scanf("%f",&n);
    
    square_root(n);
    
    return 0; 
}
