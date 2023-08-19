/*#include<stdio.h>
typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short int u16;
typedef signed short int s16;


typedef unsigned long int u32;
typedef signed long int s32;
typedef float f32;
typedef double f64;
typedef  long double f128;

	typedef  struct{
	u8 math;
     u16 chemistry;
	 u8 langauge;
	 u16 physics;
	}student;
int main(){	
    u8 id;
	 student class[10]={{10,20,30,40},{11,22,33,44},{50,60,70,80},{55,66,77,88}
	,{54 ,65,32,97} ,{10,20,30,49},{80,22,33,44},{50,60,70,80},{50,60,70,80},{54 ,65,32,97}};
	printf("enter id");
	scanf("%d",&id);
	if((id>=0)&&(id<10))
	{
		printf("math=%d",class[id].math);
		printf("chemistry=%d", class[id].chemistry);
		printf("langauge=%d",class[id].langauge);
		printf("physics=%d", class[id].physics);
	}else {
		printf("invalid id");
	}}*/
	
	
	
	/*
#include<stdio.h>
 #pragma pack(1)
typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short int u16;
typedef signed short int s16;


typedef unsigned long int u32;
typedef signed long int s32;


	typedef  struct{
	u8 math;
     u16 chemistry;
	 u8 langauge;
	 u16 physics;
	}student;
int main(){	
printf("size of student %d" ,sizeof(student));}*/



/*

#include<stdio.h>

typedef unsigned char u8;



	typedef  struct{
	u8 math:4;
     u8 chemistry:2;
	 u8 langauge:1;
	 u8 physics:2;
	}student;
int main(){	
printf("size of student %d" ,sizeof(student));}*/

#include<stdio.h>
#include "STD_TYPES.h"
int main(){
	
	u8 *ptr1;
	u16 *ptr2;
	u32 *ptr3;
	printf("size of student %d" ,sizeof(ptr1));
	printf("size of student %d" ,sizeof(ptr2));
	printf("size of student %d" ,sizeof(ptr3));
}
	
	
	
	
	