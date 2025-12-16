#include<stdio.h>
#include<stdint.h>
int main()
{
	uint8_t reg=0xAA;
	uint8_t field=(reg>>2)&0X07;
	printf("resistor before writing:0X%02X\n",reg);
	printf("bits 2 to 4 value:0b%03d\n",field);
	reg=reg&~(0X07<<2);
	reg=reg|(0x03<<2);
	printf("resistor after write:0x%02X\n",reg);
	return 0;
}
