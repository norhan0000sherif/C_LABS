#include<stdio.h>
int main()
   {
	int x,i,ID, password1=1234,password;
	int admin_mode=1,user_mode=0;
	printf("enter the value of x  ");
	scanf("%d",&x);
	if(x==admin_mode)
	{   
		printf("enter the value of password ");
	    scanf("%d",&password );
		 for(i=0;i<4;i++)
		    {	
		      if(password!=password1)
			    {
			  
				printf("try again ");		
				i++;	
				scanf("%d",&password);	
			    }
			}
	   if(password==password1)
		      {
			 printf("password correct");
			 printf("password ");
			 
		       }
			else{
			printf("password invalid");}
		 
		 
	 }else if(x==user_mode)
	 {   
        printf("enter the ID ");
	    scanf("%d",&ID );
		 switch(ID){
			 case 1000:
			 printf("name is ahmed ");
			 printf("age is 22 ");
			 printf("gender is male ");
			 break;
			 case 2000:
			 printf("name is amr ");
			 printf("age is 33 ");
			 printf("gender is male ");
			 break;
			 case 3000:
			 printf("name is nour");
			 printf("age is 22 ");
			 printf("gender is female ");
			 break;
			 case 4000:
			 printf("name is ahmed ");
			 printf("age is 50 ");
			 printf("gender is male ");
			 break;
			 
		 }
	 }
}