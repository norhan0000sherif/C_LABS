#include<stdio.h>
int main()
{
	int i,j,arr[10],mux=0,min=0,temp;	
	for(i=0;i<10;i++)
	{
		printf("enter the element i");
		scanf("%d",&arr[i]);	
	}
	
	
	for(i=0;i<9;i++)
	{for(j=0;j<=9-i;j++)
		{  if(arr[j]>arr[j+1])
		{temp=arr[j];
	      arr[j]=arr[j+1];
		  arr[j+1]=temp;
			
		}
		}
		}
	
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
		
	}
	printf("max num=%d",arr[9]);
	printf("max num=%d",arr[0]);
}