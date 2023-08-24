#include<stdio.h>
void main()
{
  int a,b,l;
  printf("\n Enter the value for a :");
  scanf("%d",&a);
  printf("\n Enter the value for b :");
  scanf("%d",&b);
  if (a>b)
  {
  	l=a;
  }
  else
  {
  	l=b;
  }
  printf("\n The Large number is %d", l);
}
