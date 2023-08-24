#include<stdio.h>
#include<stdlib.h>


void km_to_miles(float k)
{
	float m = 0.621371,f;
	
	f = k*m;
	
	printf("\nThe %.3f kms is equal to %.3f miles.",k,f);
}


void inches_to_feet(float i)
{
	float m = 0.0833333,f;
	
	f = i*m;
	
	printf("\nThe %.3f inches is equal to %.3f feet.",i,f);
}


void cms_to_inches(float c)
{
	float m = 0.393701,f;
	
	f = c*m;
	
	printf("\nThe %.3f cms is equal to %.3f inches.",c,f);	
}


void pound_to_kgs(float p)
{
	float m = 0.453592,f;
	
	f = p*m;
	
	printf("\nThe %.3f pound is equal to %.3f kgs.",p,f);	
}


void inches_to_meter(float j)
{
	float m = 0.0254,f;
	
	f = j*m;
	
	printf("\nThe %.3f inches is equal to %.3f meter.",j,f);
}


int main()
{
	
	int ch;
	
	float k,i,c,p,j;
	
	printf("\n<------Unit conversions------>\n");
	
	do
	{
		printf("\n1. kms to miles");
		printf("\n2. inches to foot");
		printf("\n3. cms to inches");
		printf("\n4. pound to kgs");
		printf("\n5. inches to meters");
		printf("\n6. Exit");

		printf("\n\nEnter your choice: ");
		scanf("%d",&ch);
		
	    switch(ch)
	    {
		    case 1 :printf("\nEnter the number in kms: ");
		            scanf("%f",&k);    
			        km_to_miles(k);
			        break;
			     
		    case 2 :
		    	    printf("\nEnter the number in inches: ");
		            scanf("%f",&i);    
			        inches_to_feet(i);
			        break;
			     
		    case 3 :printf("\nEnter the number in cms: ");
		            scanf("%f",&c);    
			        cms_to_inches(c);
			        break;
			     
		    case 4 :printf("\nEnter the number in pound: ");
		            scanf("%f",&p);    
			        pound_to_kgs(p);
			        break;
			     
		    case 5 :printf("\nEnter the number in inches: ");
		            scanf("%f",&j);    
			        inches_to_meter(j);
			        break;
			        
			case 6: exit(0);
			        break;
			     
		    default: 
		            printf("\nEnter a valid choice!!");
		            break;
		         
	    }
	    
	    printf("\n-----------------------------------------------\n");
	    
	
	}while(ch!=6);

	return 0;
}

