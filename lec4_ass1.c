#include<stdio.h>
int MAX(int op1, int op2,int op3,int op4);
int MINIMUM(int op1, int op2, int op3,int op4);

int main()
{ int x,y,z,g,o,u;
   printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of y");
    scanf("%d",&y);
	printf("enter the value of x");
    scanf("%d",&u);
    printf("enter the value of y");
    scanf("%d",&o);
    z=MAX(x,y,u,o);
  g=MINIMUM(x,y,u,o);
	printf("  the max=%d",z);
   printf("  the min=%d",g);	
}

int MAX(int op1, int op2,int op3,int op4)
{int max;
	if((op1>op2)&&(op1>op3)&&(op1>op4))
	{max=op1;
	printf(" op1 is the max");}
	

	 if((op2>op1)&&(op2>op3)&&(op2>op4))
	 {max=op2;
		printf(" op2 is the max");}
		
	
	 if((op3>op1)&&(op3>op2)&&(op3>op4))
	 {max=op3;
	printf(" op3 is the max");}
	

     if((op4>op1)&&(op4>op2)&&(op4>op3))
	 {	max=op4;
	printf(" op4 is the max");}
	
	
	return max;
	
	
	
	
}

int MINIMUM(int op1, int op2, int op3,int op4)
{  int min;
	if((op1<op2)&&(op1<op3)&&(op1<op4))
	{min=op1;
	printf(" op1 is the min");
	
	}

 if((op2<op1)&&(op2<op3)&&(op2<op4))
 { min=op2;
		printf(" op2 is the min");}
		
		
	
	 if((op3<op1)&&(op3<op2)&&(op3<op4))
	 {min=op3;
	printf(" op3 is the min");}
	
	

     if((op4<op1)&&(op4<op2)&&(op4<op3))
	 {min=op4;
	printf(" op4 is the min");}
	
	
	return min;
}
	


