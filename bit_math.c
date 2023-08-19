#include<stdio.h>
  int set_bit(int var,int Bit_number);
  int clr_bit(int var,int Bit_number);
  int GET_bit(int var,int Bit_number);
  int main()
    { 
	int x=4,res,res2,res3;
	res=set_bit(x,0);
	res2=clr_bit(x,2);
	res3=GET_bit(x,2);
	printf("%d /n",res);
	printf("%d",res2);
	printf("%d",res3);
	}
	 int set_bit(int var,int Bit_number)
	 {
		 
		var|=(1<<Bit_number) ;
		 return var;
		 
		 
		 
	 }
	 
	 int clr_bit(int var,int Bit_number)
	 {
		 
		 var&=~(1<<Bit_number);
		return var; 
		 
		 
		 
	 }
	 int GET_bit(int var,int Bit_number)
	 {
		 
		 int bit_value;
		 
		 bit_value= (1&(var>>Bit_number));
		 
		 return bit_value;
	 }