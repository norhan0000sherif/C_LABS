/*#include<stdio.h>
int main(){
int array[5]={1,2,3,4,5};
	
printf("%d\n",array[0]);
printf("%d\n",array[1]);	
printf("%d\n",array[2]);	
printf("%d\n",array[3]);
printf("%d\n",array[4]);	
}
#include<stdio.h>
int main(){
int array[5]={1,2};
	
printf("%d\n",array[0]);
printf("%d\n",array[1]);	
printf("%d\n",array[2]);	
printf("%d\n",array[3]);
printf("%d\n",array[4]);	
}*/
/*
#include<stdio.h>
int main(){
int array[5]={1,2,3,4,5,6};
	
printf("%d\n",array[0]);
printf("%d\n",array[1]);	
printf("%d\n",array[2]);	
printf("%d\n",array[3]);
printf("%d\n",array[4]);	
}*/

/*
#include<stdio.h>
int main(){ 
int i=0;
int array[5];
for(i=0;i<=4;i++){
	
   scanf("%d",&array[i]);
	
	
}
for(i=4;i>=0;i--)
{
	
	printf("%d\n",array[i]);
	
}}*/
/*#include<stdio.h>
int main(){ 
int i=0,sum=0;
float avg=0;
int array[10];
for(i=0;i<=9;i++){
	
   scanf("%d",&array[i]);
   sum=sum+array[i];
}
printf("%d\n",sum);
avg=(1.0)*sum/10;
printf("%f",avg);	
}
*/
/*#include<stdio.h>
int main()
{ 
	int arr[10];
	int i;
	int target;
     for(i=0;i<=9;i++)
      {
	
		printf("eter the element",i);
		scanf("%d",&arr[i]);
        }
        printf("eter the target");
		scanf("%d",&target);  

          for(i=0;i<=9;i++)
           { 
            if(arr[i]==target)
		  {
			printf("the value is exit");  
			  
	        }
	  }

}*/
/*
#include<stdio.h>
int main(){ 
int arr[10];
int i;
int target,counter=0;
     for(i=0;i<=9;i++)
      {
	
		printf("eter the element",i);
		scanf("%d",&arr[i]);
        }
printf("eter the target");
		scanf("%d",&target);  

for(i=0;i<=9;i++)
      { if(arr[i]==target)
		  {counter ++;
	  
	  }}			
		if(counter>0)	  
		{
			
			
		printf("counter=%d",counter);	
			
		}
		
		 else if(counter==0)	  
		{
			
			
		printf("the value not exist");	
			
}}*/




#include<stdio.h>
int main()
{
	int i,j,arr[10],mux=0,min=0,target=0,counter=0;
     printf("enter the target");
	scanf("%d",&target);	
	for(i=0;i<10;i++)
	{
		printf("enter the element i");
		scanf("%d",&arr[i]);	
	 	
	    if (arr[i]==target)
		{
			printf("the value is exist");
			counter++;
			printf("%d",counter);
		}
	
	else 
	{printf("the value isnot exist");
	 }
	}	
}
