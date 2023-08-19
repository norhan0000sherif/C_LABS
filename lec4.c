/*#include<stdio.h>
int ADD(int op1,int op2);

  int main(void)
    {  
      int x=7;int y=8;  int  z;
	  z= ADD(x,y);
	  printf("%d",z);



	}
	int ADD(int op1,int op2)
	
	{
	int result;
	result=op1+op2;
	return result;
	}
	
*/	
	
	
	/*#include<stdio.h>
void ADD(int op1,int op2);

  int main(void)
    {  
      int x=7;int y=8; 
	  ADD(x,y);
	
	}
	void ADD(int op1,int op2)
	
	{
	int result;
	result=op1+op2;
	printf("%d",result);
	}*/
	
	
/*	#include<stdio.h>
int INC(int op1);

  int main(void)
    {  int z;
      int x=7;
	 z= INC(x);
	printf("%d",z);
	z= INC(x);
	printf("%d",z);
	printf("%d",x);
	}
	int INC(int op1)
	
	{int result;
	result=op1++;
	return op1;
	}*/
	
	/*#include<stdio.h>
int INC(void);
int x=7;
  int main(void)
    {  
	 INC();
	
	printf("%d",x);
	}
	int INC(void)
	
	=
	x++;
	
	}*/
	
/*	#include<stdio.h>
	int sum,mul;
void calculator(int op1, int op2);
int main(void)
    {  
	 int x=5;int y =10;
	calculator(x,y);
	printf("%d",sum);
	printf("%d",mul);
	}
	
void calculator(int op1, int op2)
{
	
	sum=op1+op2;
	mul=op1*op2;
	
}*/
#include<stdio.h>
	int x,y,z;
   printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of y");
    scanf("%d",&y);
	
int swap(int op1, int op2);
int main(){
	
	z=swap(x,y);
	
	printf("enter the value of x and y = %d,%d",x,y);
	
}
void swap(int op1, int op2)
{int op3;
	op3=op1;
	op1=op2;
	op2=op3;
	
	
}