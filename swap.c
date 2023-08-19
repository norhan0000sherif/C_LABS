#include<stdio.h>
int x=7;
int y=10;
void swap(void);
int main()

{ //before
    printf("%d",x);
	printf("%d",y);
	swap();
	//after
	printf("%d",x);
	printf("%d",y);

}
void swap(void)
{  int z;
	z=x;
	x=y;
	y=z;
	
}