#include <stdio.h>

int main()
{
int x,y,sum=0,sub=0,z,r,D;

printf("enter the first number:");
scanf("%d",&x);
printf("enter the second number:");
scanf("%d",&y);
sum=x+y;
sub=x-y;
z=x&y;
r=x^y;
D=x|y;
printf("enter the sum:%d  \n",sum);
printf("enter the sub:%d  \n",sub);
printf("enter the anding:%d \n",z);
printf("enter the oring:%d \n",D);
printf("enter the xoring:%d  \n",r);



}