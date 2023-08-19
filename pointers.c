/*#include <stdio.h>
	int main()
	{int x=20;
	int *ptr;
	ptr=&x;
	
	printf("the value of x before change=%d\n",x);
	*ptr=90;
	printf("the value of x after change=%d",x);
	}*/
/*#include <stdio.h>
	
	void INC(int *ptr);
	int main()
	{int *ptr=&x;
	    
		int x=50;
		INC(ptr);
		printf("the value of x %d\n",x);
		
	}
	void INC(int *ptr)
	{
		(*ptr)++;
	}
	*/
	/*#include <stdio.h>
	
	void calc(void);
	int main()
	{void(*ptr)(void)
	    
		
		
	}
	void calc(void);
	{ int x=9,y=8;
		
		
		printf("the sum %d\n",x+y);
		
	}
	*/
	/*
#include<stdio.h>
int main()
{int i,j,temp=0;
	
int arr[10]={10,9,8,7,6,5,4,3,2,1};
int *ptr=arr;
for(i=0;i<9;i++)
{
	for(j=0;j<(9-i);j++)
    {
	    if((*(ptr+j)>(*(ptr+j+1)))
		
		
		{temp=(*(ptr+j));
			(*(ptr+j))=(*(ptr+j+1));
	     (*(ptr+j+1)) =temp;
			
		}
		}
	
	
	
     }
	 for(i=0;i<10;i++)
{
	
	printf("%d\n",*(ptr+i));
}}	
	*/
	
	/*#include<stdio.h>
	int* func(void);
	int main(){
		int *ptr,i;
		ptr=func();
		for(i=0;i<10;i++)
	{
		
		printf("%d\n",*(ptr+i));
	}
		
	}
     int* func(void)
	 {
		static int arr[10]={10,9,8,7,6,5,4,3,2,1}; 
		return arr;
		 
	 }
	 
	 */
	 /* lab4
	#include<stdio.h>
	
	int main(){
		int i;
		int arr[10];
		int sum=0;
		
		for(i=0;i<10;i++)
		{printf("Please Enter number %d:  ",i);
		scanf ("%d",&arr[i]);
			
		}
	   int *ptr=arr;
	   for(i=0;i<10;i++)
		{
	    printf("%d",*(ptr+i));
		sum+=*(ptr+i);	
		}
	printf("Please Enter number %d:  ",sum);}*/
	
	
		
		
		
		/* lab2
		#include<stdio.h>
	int sum(int *x,int *y );
	int main()
	{int x=0,y=0;
		
		printf("Please Enter a   ",x);
		scanf ("%d",&x);
		printf("Please Enter b",y);
		scanf ("%d",&y);
	    
		
		  int z=sum(&x,&y);
		  printf("%d",z);
	       }
		int sum(int *x,int  *y )
		{
			int c=*(x)+*(y);
			return c;
		}
	
	
	*/
	
	
	
	/*lab 3
	#include<stdio.h>
	void func(int x,int y, int *sum,int *sub );
		
		int main(){
			int x,y ,sum=0,sub=0;
		printf("Please Enter x   ");
		scanf ("%d",&x);
		printf("Please Enter y  ");
		scanf ("%d",&y);
	   func( x, y,&sum,&sub );
	   printf("The result of Summation   is:  %d\n",sum);
	printf("The result of Subtraction is:  %d",sub);
	       }
	    void func(int x,int y, int *sum,int *sub )
		{  *sum=x+y;
		  *sub =x-y;
		
		}*/
		
		
		
		
		/* lab 5
			#include<stdio.h>
			
		int scalar_multiplication( int *ptr1, int *ptr2);
			int main(){
				int z=0;
				
			int arr1[3]={1,2,3};
			int arr2[3]={1,2,3};
			int *ptr1=arr1;
			int *ptr2=arr2;
			z=scalar_multiplication(arr1,arr2)  ;
			  printf("The result of Subtraction is:  %d",z);
			  }
				int  scalar_multiplication( int *ptr1, int *ptr2)
				{   
				
					int sum = 0;
					int i;
					
					for (i=0;i<3;i++)
					{
						sum += ptr1[i] * ptr2[i];
					}
					
					return sum;
				}
									
				
				
				
				
				
			