/*
#include<stdio.h> 
typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short int u16;
typedef signed short int s16;


typedef unsigned long int u32;
typedef signed long int s32;
typedef float f32;
typedef double f64;
typedef  long double f128;

 struct empolyee {
	
	u32 salary;
	u32 bonus;
	u32 daducton;
	
};
int main()
{ u32 salary;
	u32 bonus;
	u32 daducton;
	u32  total;
struct empolyee ahmed;
struct empolyee  ali ;
struct empolyee  waleed;


printf("enter ahmed salary");
scanf("%d",&(ahmed.salary));
printf("enter ahmed bonus ");
scanf("%d",&(ahmed.bonus));
printf("enter ahmed daducton");
scanf("%d",&(ahmed.daducton));




printf("enter ali salary");
scanf("%d",&(ali.salary));
printf("enter ali bonus ");
scanf("%d",&(ali.bonus));
printf("enter ali daducton");
scanf("%d",&(ali.daducton));

printf("enter waleed salary");
scanf("%d",&(waleed.salary));
printf("enter waleed bonus ");
scanf("%d",&(waleed.bonus));
printf("enter waleed daducton");
scanf("%d",&(waleed.daducton));


salary=(ahmed.salary)+(ali.salary)+(waleed.salary);
bonus=(ahmed.bonus)+(ali.bonus)+(waleed.bonus);

daducton=(ahmed.daducton)+(ali.daducton)+(waleed.daducton);

total=salary+bonus-daducton;


printf("the needed value=%d",total);



}*/
/*
#include<stdio.h> 
typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short int u16;
typedef signed short int s16;


typedef unsigned long int u32;
typedef signed long int s32;
typedef float f32;
typedef double f64;
typedef  long double f128;

 typedef struct  {
	
	u32 salary;
	u32 bonus;
	u32 daducton;
	
}empolyee ;
int main()
{ u32 salary;
	u32 bonus;
	u32 daducton;
	u32  total;
 empolyee ahmed;
 empolyee  ali ;
 empolyee  waleed;


printf("enter ahmed salary");
scanf("%d",&(ahmed.salary));
printf("enter ahmed bonus ");
scanf("%d",&(ahmed.bonus));
printf("enter ahmed daducton");
scanf("%d",&(ahmed.daducton));




printf("enter ali salary");
scanf("%d",&(ali.salary));
printf("enter ali bonus ");
scanf("%d",&(ali.bonus));
printf("enter ali daducton");
scanf("%d",&(ali.daducton));

printf("enter waleed salary");
scanf("%d",&(waleed.salary));
printf("enter waleed bonus ");
scanf("%d",&(waleed.bonus));
printf("enter waleed daducton");
scanf("%d",&(waleed.daducton));


salary=(ahmed.salary)+(ali.salary)+(waleed.salary);
bonus=(ahmed.bonus)+(ali.bonus)+(waleed.bonus);

daducton=(ahmed.daducton)+(ali.daducton)+(waleed.daducton);

total=salary+bonus-daducton;


printf("the needed value=%d",total);



}*/
#include<stdio.h> 
typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short int u16;
typedef signed short int s16;


typedef unsigned long int u32;
typedef signed long int s32;
typedef float f32;
typedef double f64;
typedef  long double f128;
int main(){
 typedef struct  {
	
	

	
}mystruct ;
mystruct object;
mystruct *ptr=&object;
