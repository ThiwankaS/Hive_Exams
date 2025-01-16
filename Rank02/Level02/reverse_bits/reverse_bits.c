#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	return (octet << 1);
}

int main(void)
{
	printf("Before : %c\n",'A');
	printf("After : %c\n",reverse_bits('A'));
	return (0);
}
