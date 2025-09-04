#include <stdio.h>
#include <limits.h>
#include<math.h>
//prototyping
int amount_of_bits(long total_amount);

int main(void){
	
	//check for integer
	printf("The minimal of integer is %d and the maximal is %d\n", INT_MIN, INT_MAX); 
	if(INT_MIN < 0){
		printf("The integer is signed\n");
		long total_amount = (long)INT_MAX - (long)INT_MIN + 1;
		amount_of_bits(total_amount);
	}else{
		printf("The Integer is unsigned\n");
		amount_of_bits((long)(INT_MAX + 1));
	}
	
	//check for short
	printf("The minimal of short is %d & the maximal is %d\n", SHRT_MIN, SHRT_MAX);
	if(SHRT_MIN < 0){
		printf("The short is signed\n");
		long total_amount = (long)SHRT_MAX - (long)SHRT_MIN + 1;
		amount_of_bits(total_amount);
		}else{
		printf("The short is unsigned\n");
		amount_of_bits((long)(SHRT_MAX + 1));
	}
	
	//Check for char
	printf("the rage of char is %d to %d\n", CHAR_MIN, CHAR_MAX);
	if(CHAR_MIN < 0){
		printf("The char is signed\n");
		long total_amount = (long)CHAR_MAX - (long)CHAR_MIN  + 1;
		amount_of_bits(total_amount);
		
		
	}else{
		printf("The char is unsigned \n");
		amount_of_bits((long)(SHRT_MAX + 1));
	}
}
	
	
	//function log2 for bit recalc
int amount_of_bits(long total_amount){
		int amount_bits = log2(total_amount);
		printf("Total amount of bits are : %d\n", amount_bits);
		return amount_bits;
}
	