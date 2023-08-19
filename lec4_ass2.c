#include<stdio.h>
int ADD(int op1, int op2);
int SUB(int op1, int op2);
int MUL(int op1, int op2);
int DIV(int op1, int op2);
int AND(int op1, int op2);
int OR(int op1, int op2);
int NOT(int op1);
int XOR(int op1, int op2);
int REM(int op1, int op2);
int INC(int op1);
int DEC(int op1);

int main()
{ 
  int X,Y,Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,ID;
  printf("enter the fist number");
	scanf("%d",&X);
    printf("enter the second number");
	scanf("%d",&Y);
	printf("enter the id");
	scanf("%d",&ID);
	switch(ID){
		case 1: Z1=ADD(X,Y);
		printf("%d",Z1);   
		break;
		case 2: Z2=SUB(X,Y);
		printf("%d",Z2);
		break;
		case 3: Z3=MUL(X,Y);
		printf("%d",Z3);
		break;
		case 4: Z4=DIV(X,Y);
		printf("%d",Z4);
		break;
		case 5: Z5=AND(X,Y);
		printf("%d",Z5);
		break;
		case 6: Z6=OR(X,Y);
		printf("%d",Z6);
		break;
		case 7: Z7=NOT(X);
		printf("%d",Z7);
		break;
		case 8:Z8=XOR(X,Y);
		printf("%d",Z8);
		break;
		case 9 : Z9=REM(X,Y);
		printf("%d",Z9);
		break;
		case 10: Z10=INC(X);
		printf("%d",Z10);
		break;
		case 11: Z11=DEC(X);
		printf("%d",Z11);
		break;
}
}
int ADD(int op1, int op2)
{
	int result;
	result= op1 + op2;
	return result;
	
	
}
int SUB(int op1, int op2)
{
	int result2;
	result2= op1 -op2;
	return result2;
	
	
}
int MUL(int op1, int op2)
{
	int result3;
	result3= op1*op2;
	return result3;
	
	
}
int DIV(int op1, int op2)
{
	int result4;
	result4= op1/op2;
	return result4;
	
}
int AND(int op1, int op2)
{
	int result5;
	result5= op1&op2;
	return result5;
	
}
int OR(int op1, int op2)
{
	int result6;
	result6= op1|op2;
	return result6;
	
}
int NOT(int op1)
{
	int result7;
	result7= ~op1;
	return result7;
	
}
int XOR(int op1, int op2)
{
	int result8;
	result8= op1^op2;
	return result8;
	
}
int REM(int op1, int op2)
{
	int result9;
	result9= op1%op2;
	return result9;
	
}
int INC(int op1)
{
	int result10;
	result10= ++op1;
	return result10;
	
}
int DEC(int op1)
{
	int result11;
	result11= --op1;
	return result11;
	
}