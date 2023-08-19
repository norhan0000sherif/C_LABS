#include<stdio.h>
int main()
{
	int i,ID,paasword;
	printf("enter the value of Id:");
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 1234: 
		for(i=0;i<3;i++)
			{
				printf(" enter your password");
				 scanf ("%d",&paasword);
		     if(paasword==7788)
			 {      printf(" welcome ahmed");
		             break;
			}
			
		 else if (i<2)
					   {
						   printf("Try again: ");
					   }
				   
				   printf("no try again"); 
				   
			}
				   break;
	
			
		
		
		
		
		case 5678: 
		  for(i=0;i<3;i++)
			{printf(" enter your password");
		      scanf ("%d",&paasword);
		     if(paasword==5566)
			 {      printf(" welcome amr"); 
		        break;
		 }
			
			 else if (i<2)
					   {
						   printf("Try again: ");
						 
					   }
				    
				   printf("no try again"); 
			}
				   break;
			
		
		  case 9870: 
		
			for(i=0;i<3;i++)
			{
				printf(" enter your password");
				scanf ("%d",&paasword);
		     if(paasword==1122)

			 {      printf(" welcome wael");
			           break;
				}
			
			
			 else if (i<2)
					   {
						   printf("Try again: ");
					   }
			
				   printf("no try again"); 
				   }
				   break;
	}
}