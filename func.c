 /*#include<stdio.h>
int main()
{
	int i,arr[i];
	for(i=0;i<5;i++)
	{
		printf("enter the element i");
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
		
		
	}
	
}

	#include<stdio.h>
int main()
{
	int arr[5]={1,3,4,3,5};
	
	printf("%d",arr[3]);
}
    
	
	#include<stdio.h>
int main()
{
	int i,arr[10],sum=0,avg=0;
	for(i=0;i<10;i++)
	{
		printf("enter the element i");
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	    avg =sum/10;
		printf("%d\n",sum);
		printf("%d",avg);
		
	
	
}*/
	
#include<stdio.h>
int main()
{
	int i,j,arr[10],mux=0,min=0,temp;	
	for(i=0;i<=9;i++)
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
	
	for(i=0;i<=9;i++)
	{
		printf("%d",arr[i]);
		
	}
	printf("max num=%d",arr[9]);
	printf("max num=%d",arr[0]);
}