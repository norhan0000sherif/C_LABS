#include <stdio.h>
int main()
{int start=0,middle,end=9,target;
int arr[10]={1,2,3,4,5,6,7,8,9,10};
middle=(start+end)/2;
printf("eter the target");
		scanf("%d",&target);  

while(start<=end)
{
	middle=(start+end)/2;
	
	 if(arr[middle]==target)
	
	break;
	else if (arr[middle]>target)
		end= middle-1;
	
	else if (arr[middle]<target)
		start= middle+1;
	
	
}if (start>end)
printf("eter the target");
else
	printf(" the target=%d",target);
}