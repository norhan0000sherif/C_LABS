#include<stdio.h>
int main()
{
	int i,j,t,y,g,class1[10],class2[10],class3[10],counter=0,counter2=0,counter3=0,failed1,temp,k,failed2,failed3,mux=0,min=0,sum1=0,sum2=0,sum3=0,avg=0;
    //class1 
	for(i=0;i<10;i++)
	{
		printf("enter the element i");
	     scanf("%d",&class1[i]);}
		 
		 for(i=0;i<10;i++)
	{
		 
           if(class1[i]>=50)
		   {  
	         
			  counter++;
			  
		   }
			  else if(class1[i]<50)
		   {
			   
			   failed1++;  
		   } sum1+=  class1[i];
		   }
		 printf(" no.student in class1 is passed %d ",counter);  
		   
		 printf(" no.student in class1 is failed %d ",failed1);
		   
		for(i=0;i<9;i++)
	   {   for(k=0;k<9-i;k++)
		   {   if(class1[k+1]<class1[k])
			   { temp=class1[k+1];
	             class1[k+1]=class1[k];
		   class1[k]=temp;}}}
		  printf("min=%d",class1[0]);
			printf("max=%d",class1[9]);
	
		
           
		   
		   
	//class2	   

	   for(j=0;j<10;j++)
	{
		printf("enter the element j");
	    scanf("%d",&class2[j]);	}
		
		
		  for(j=0;j<10;j++)
	{
		 if(class2[j]>=50)
		   {  
	        
			  counter2++;
		   }
			  
	
		   else if(class2[j]<50)
		   {
			   
		   failed2++;    }sum2+=class2[j];
	   } printf(" no.student in class2 is passed %d ",counter2);
		  printf(" no.student in class2 is failed %d ",failed2);   
		   for(j=0;j<9;j++)
	    {
          for(y=0;y<9-j;y++)
		   {   if(class2[y+1]<class2[y])
			   { temp=class2[y+1];
	          class2[y+1]=class2[y];
			   class2[y]=temp;}
	 
		}}printf("min=%d",class2[0]);
         printf("max=%d",class2[9]);
        
		
		   
		// class3   
	
    for(t=0;t<10;t++)
	{
		printf("enter the element t");
	   scanf("%d",&class3[t]);	}
		 for(t=0;t<10;t++)
	{
		 if(class3[t]>=50)
		   {  
	         
			  counter3++;
			  
		  }
			  else if(class3[t]<50)
		   {
		   failed3++;    }sum3+=class3[t];
		   }   
			  
		   printf("no.student in class3 is passed=  %d ",counter3);
	        printf("no.student in class3 is failed=  %d ",failed3++);
			
       for(t=0;t<9;t++)
	        {for(g=0;g<9-t;g++)
		   {   if(class3[g+1]<class3[g])
			   {temp=class3[g+1];
	             class3[g+1]=class2[g];
		        class3[g]=temp;}
	  
		   }}printf("min=%d",class3[0]);
        printf("max=%d",class3[9]);
        
		
		
		
	printf("\nNumber of passed students = %d \n",counter+counter2+counter3);
	printf("Number of failed students = %d \n",failed1+failed2+failed3);
	printf("avg = %d \n",(sum1+sum2+sum3)/30);
	if(class1[9]>class2[9]){
		if(class1[9]>class3[9])
		{
			 printf("max grade=%d ",class1[9]);
	     }else{
		 printf("max grade=%d ",class3[9]);
	}}
	else if(class2[9]>class3[9]){
		
		 printf("max grade=%d ",class2[9]);
	}else{
		 printf("max grade=%d ",class3[9]);
	}
		 
		 
	
	

if(class1[0]<class2[0]){
		if(class1[0]<class3[0])
		{
			 printf("min grade=%d ",class1[0]);
	     }else{
		 printf("min grade=%d ",class3[0]);
}}
	   else if(class2[0]<class3[0]){
		
		 printf("min grade=%d ",class2[0]);
}
	else{
		 printf("min grade=%d ",class3[0]);
	}
}









