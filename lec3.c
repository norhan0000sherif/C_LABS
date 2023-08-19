/*    lab1
#include<stdio.h>
int main()
{
int i;
for(i=0;i<1000;i++)
{
	
printf("nour /n");
	
}

}*/




/*     even numbers
#include<stdio.h>
int main()
{
int i;
for(i=0;i<=15;i+=2)
{  

     printf("%d",i);
}}
*/

/*     from 15 to 0
#include<stdio.h>
int main()
{
int i;
for(i=15;i>=0;i--)
{  

     printf("%d",i);
}}*/

/* sum of 10 numbers
#include<stdio.h>
    int main()
      {
     int i,sum=0;
   for(i=0;i<=9;i+=1)
     {  
         sum=sum+i;
      }
     printf("%d",sum);
     }
	 
	 */
	 
	 
/*	 
	 
#include<stdio.h>
    int main()
      {
     int i,fact=1;
   for(i=1;i<=9;i+=1)
     {  
         fact=i*fact;
      }
     printf("%d",sum);
     }	 */
	 
	 /*  entered by user
	#include<stdio.h>
    int main()
      {
     int i,x,sum=0;
   for(i=0;i<=9;i++)
	   printf("enter the value=%d",i+1)
     {  scanf("%d",&x);
         sum=sum+x;
      }
     printf("%d",sum);
     }*/
	  
	  /*
	  sum of odd number
	  #include<stdio.h>
    int main()
      {
     int i,x,sum=0;
   for(i=1;i<10;i+=2)
   {       
         sum=sum+i;
      }
     printf("%d",sum);
     }  
	 
	 
	 
	 #include<stdio.h>
    int main()
      {
     int i,x,sum=0;
   for(i=0;i<10;i++)
   {     if(i%2==1)  
   {
         sum=sum+i;
   }
   }
     printf("%d",sum);
     }*/
	 
	 
	 
	 
	 
	 
	 /*   print number from 0 to 10 (wile loop)
	
#include<stdio.h>

	int main(){
	int i=0;
	while(i<10)
	{
		printf("%d",i);
		i++;
	}}*/
		

		
	/*	
		
#include<stdio.h>

	int main(){
		int i;   int fact=1;
	printf("enterthe value of x:");
	scanf("%d",&i);
	
	while(i>=1);
	{
		fact =fact*i;
		
		i--;
	}
	printf("%d",fact);
	}*/
	
	
	/*  lab 5
	#include<stdio.h>

	int main(){
		int i,x; 
		int mul=1;
	printf("enterthe value of x:");
	scanf("%d",&x);
	
	while(i<=x)
	{
		mul=x*i;
		printf("%d*%d=%d",x,i,mul);
		i++;
	}
	
	}*/
	
	/*    lab 4
	#include<stdio.h>

	int main(){
		int i,y,x;       x =3        y=4
		int mul=1;
	printf("enterthe value of x:");
	scanf("%d",&x);
	printf("enterthe value of x:");
	scanf("%d",&y);
	mul=x*y;
	printf("enterthe value of x:");
	scanf("%d",&i);
	
	while(i!=mul)
	{
		
		printf("non correct");
		scanf("%d",&i)
	}
	printf("%d*%d=%d",x,y,mul);
	}*/
	
	
#include<stdio.h>
int main()
{
	int i=0;
	
	for(i=0;i<=10;i++)
	while(i>2)
	{if(i==10)
		{break;}
      x++;
	}
}
	
	
	#include<stdio.h>
  int main()
    {    
	
	int n1,n2;   
	printf("enter the number:");
	scanf("%d",&n1);
	printf("enter the number:");
	scanf("%d",&n2);
	
	(n1>n2)?(printf("%d",n1)):(printf("%d",n2));
	
	
	}
