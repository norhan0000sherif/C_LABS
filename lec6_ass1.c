#include<stdio.h>
 
	void bubble_sorting(int *ptr);


	int main()
	{ int i;  
	int arr[4];
		for (i=0;i<4;i++)
	{
		printf("Please Enter number %d:  ",i);
		scanf ("%d",&arr[i]);
	}
	for(i=0;i<4;i++)
	{	printf("Please Enter number  ");
	scanf("the array=%d",&arr[i]);	
	}
	int *ptr=arr;
	bubble_sorting(arr);
   printf("Values after sorting are:\n");
	for(i=0;i<4;i++)
	{
	printf("the array=%d",arr[i]);}}
	
	void bubble_sorting(int *ptr)
	{   int i,j;
	  int temp=0;
	  
	for(i=0;i<3;i++)
	{   for(j=0;j<3-i;j++)
		{  if((ptr[j+1])<(ptr[j]))
			{
				temp=(ptr[j+1]);
				(ptr[j+1])=(ptr[j]);
				(ptr[j])=temp;
				
			}
			
		}
	}
		
		
		
	}
	
