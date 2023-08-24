#include<stdio.h>

int main()
{
	int rating;
	
	printf("\nPlease give your rating between 1 to 5\n");
	printf("\nEnter your Rating: ");
	scanf("%d", &rating);
	
	switch(rating)
	{
		case 1: 
		    printf("\n\nThank you for your feedback. Your rating is 1.");
		    break;
		    
		case 2: 
		    printf("\n\nThank you for your feedback. Your rating is 2.");
		    break;
			
		case 3: 
		    printf("\n\nThank you for your feedback. Your rating is 3.");
		    break;
			
		case 4: 
		    printf("\n\nThank you for your feedback. Your rating is 4.");
		    break;
			
		case 5: 
		    printf("\n\nThank you for your feedback. Your rating is 5.");
		    break;
			
		default: 
		    printf("\n\nInvalid rating!!!!!!!!");
		    break;    
		    
	}
	return 0;
}


