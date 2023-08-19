#include<stdio.h>
#include "BIT_MATH.h"
#include   "STD_TYPES.h"
//void print(void);
//int x=5;   provided
int main()
{ u8 x=1,bitvalue;

 //print();   nedded
printf("%d",x);  
SET_BIT(x,0) ;
printf("%d",x);
bitvalue=GET_BIT(x,5) ;
printf("%d",bitvalue); 
}
