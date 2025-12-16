#include<stdio.h>
#include<stdint.h>
int main()
{
	uint16_t reg=0xABCD;
	uint8_t lower4=reg&0x000F;
	uint8_t upper4_lower_byte=(reg&0x00F0)>>4;
	printf("registor value:0X%0.4X\n",reg);
	printf("lower 4 bits:0x%X\n",lower4);
	printf("upper 4 bits of low byte:0x%X\n",upper4_lower_byte);
	return 0;
}
