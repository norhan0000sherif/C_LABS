#include<stdio.h>
int main()
{
	int i,j,t,class1[10],class2[10],class3[10],counter=0,counter2=0,counter3=0,failed1,failed2,failed3;
     
	for(i=0;i<10;i++)
	{
		printf("enter the element i");
		scanf("%d",&class1[i]);
           if(class1[i]>=50)
		   {  
	          printf("student is passed ");
			  counter++;
			  printf(" no.student in class1 is passed %d ",counter);
			  break;
			  else if(class1[i]<50)
		   {
			 printf("student is failed ");   
			   failed1++;
		   }   
		   }
		for(i=0;i<9;i++)
	   {   for(k=0;k<9-i;k++)
		   {   if(class1[k+1]>class1[k])
			   { temp=class1[k+1];
	             class1[k+1]=class1[k];
			      class1[k]=temp;}
	 
	   }}
      for(i=0;i<10;i++)
	  { 
        printf("min=%d",class1[0]);
        printf("max=%d",class1[9]);
		
        }  