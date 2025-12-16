#include<stdio.h>
#include<stdint.h>
int main()
{
	uint8_t value=5;
	uint8_t left_shift,right_shift;
	left_shift=value<<2;
	right_shift=value>>1;
	printf("original value=%d\n",value);
	printf("after left shift by 2=%d\n",left_shift);
	printf("after rightshift by 1=%d\n",right_shift);
	return 0;
	
}
