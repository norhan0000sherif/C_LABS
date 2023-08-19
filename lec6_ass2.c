#include<stdio.h>
int main(){
int x=4,y=9,z=10;
int *p=&x;
int *q=&y;
int *r=&z;
printf("the value of x:%d\n",x);
printf("the value of y:%d\n",y);
printf("the value of z:%d\n",z);
printf("the value of x:0x%x \n",p);
printf("the value of y:0x%x\n",q);
printf("the value of z:0x%x\n",r);
printf("the value of x:%d\n",*p);
printf("the vaue of y:%d\n",*q);
printf("the vaue of z:%d\n",*r);
printf("Swapping pointers\n");
p=&z;
q=&y;
r=&x;
printf("the value of x:0x%x \n",p);
printf("the value of y:0x%x\n",q);
printf("the value of z:0x%x\n",r);
printf("the value of x:%d\n",*p);
printf("the vaue of y:%d\n",*q);
printf("the vaue of z:%d\n",*r);


}