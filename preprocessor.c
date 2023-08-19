 /*
 #include<stdio.h>
#include "BIT_MATH.h"
#include   "STD_TYPES.h"
#include<stdlib.h>   //dynamic
#define x  9
int main(){
	
#if x==5
printf("the value of x:5");	
printf("bye");
#elif x==6
printf("the value of x:6");	
printf("bye");
#else
// # warning "invalid input"
#error "hhh"		
printf("the value invalid");

			
#endif	
	
	
	
}*/
#include<stdio.h>
#include "BIT_MATH.h"
#include   "STD_TYPES.h"
#include<stdlib.h>   //dynamic

int main(){
	
u32 size,i,j,temp;
printf("the size");
scanf("%d",&size);
u32 *ptr;

//ptr=(u32*)malloc(size*sizeof(u32));
ptr=(u32*)calloc(size,sizeof(u32));

	for(i=0;i<size;i++)
	{
		printf("the element%d",i);
        scanf("%d",(ptr+i));
	}
	for(i=0;i<(size-1);i++)
	{
		for(j=0;j<(size-1-i);j++)
		{
			if((*(ptr+j+1))<(*(ptr+j)))
			{
				temp=(*(ptr+j));
		      (*(ptr+j))=(*(ptr+j+1));
				(*(ptr+j+1))=temp;
				
			}
		}
	}
			for(i=0;i<size;i++)
	{
	printf("the element%d=%d",i,*(ptr+i));}
}